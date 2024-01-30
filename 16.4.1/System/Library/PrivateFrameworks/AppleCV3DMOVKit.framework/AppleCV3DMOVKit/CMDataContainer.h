@class NSString, NSNumber, NSMutableArray;

@interface CMDataContainer : NSObject <NSSecureCoding> {
    unsigned long long nextDataSent;
    unsigned long long nextDataRecv;
    unsigned long long nextMsgSent;
    unsigned long long nextMsgRecv;
    unsigned long long nextEvent;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *cv3dVersion;
@property (retain, nonatomic) NSString *iOSVersion;
@property (retain, nonatomic) NSString *macOSVersion;
@property (retain, nonatomic) NSString *cvPlayerVersion;
@property (retain, nonatomic) NSString *deviceString;
@property (retain, nonatomic) NSNumber *sessionID;
@property (retain, nonatomic) NSMutableArray *cmDataSent;
@property (retain, nonatomic) NSMutableArray *cmDataRecv;
@property (retain, nonatomic) NSMutableArray *cmMsgSent;
@property (retain, nonatomic) NSMutableArray *cmMsgRecv;
@property (retain, nonatomic) NSMutableArray *cmEvents;

+ (id)classes;
+ (id)versionS;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)appendCMData:(id)a0 sending:(BOOL)a1;
- (void)appendCMEvent:(id)a0;
- (void)appendCMMessage:(id)a0 sending:(BOOL)a1;
- (id)grabNextDataRecv;
- (id)grabNextDataSent;
- (id)grabNextEvent;
- (id)grabNextMessageRecv;
- (id)grabNextMessageSent;
- (void)resetReader;

@end
