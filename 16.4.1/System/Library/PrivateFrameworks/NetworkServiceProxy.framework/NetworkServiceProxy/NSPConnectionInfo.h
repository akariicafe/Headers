@class NSString, NSDictionary, NSArray, NSDate;

@interface NSPConnectionInfo : NSObject <NSSecureCoding> {
    long long _fallbackReason;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long pathType;
@property (nonatomic) long long fallbackReason;
@property (nonatomic) double fallbackDelay;
@property (nonatomic) long long edgeType;
@property (retain, nonatomic) NSString *edgeAddress;
@property (nonatomic) BOOL isMultipath;
@property (nonatomic) unsigned long long multipathSubflowCount;
@property (nonatomic) unsigned long long multipathConnectedSubflowCount;
@property (nonatomic) unsigned long long multipathPrimarySubflowInterfaceIndex;
@property (retain, nonatomic) NSDictionary *multipathSubflowSwitchCounts;
@property (retain, nonatomic) NSDictionary *TCPInfo;
@property (retain, nonatomic) NSDate *firstTxByteTimeStamp;
@property (nonatomic) double firstTxByteDelay;
@property (nonatomic) double connectionDelay;
@property (nonatomic) BOOL TFOSucceeded;
@property (nonatomic) long long IPType;
@property (nonatomic) long long interfaceType;
@property (nonatomic) unsigned long long minimumRTT;
@property (nonatomic) double timeIntervalSinceLastUsage;
@property (retain, nonatomic) NSDictionary *exceptions;
@property (retain, nonatomic) NSString *interfaceName;
@property (retain, nonatomic) NSArray *timingIntervals;
@property (nonatomic) double timeToFirstByte;
@property (nonatomic) long long tunnelConnectionError;
@property (nonatomic) BOOL isTFOProbeSucceeded;
@property (nonatomic) unsigned long long initialBytesLeftOver;
@property (readonly, nonatomic) long long fallbackReasonCategory;

+ (BOOL)shouldResolveForFallbackReason:(long long)a0;
+ (int)fallbackReasonToErrno:(long long)a0;
+ (id)getFallbackReasonDescription:(long long)a0;
+ (BOOL)shouldMoveToNextEdgeForFallbackReason:(long long)a0;

- (id)copyDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)timingIntervalAtIndex:(unsigned long long)a0 forKey:(id)a1;

@end
