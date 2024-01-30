@class NSString;

@interface W5PingResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSString *interfaceName;
@property (nonatomic) double timeout;
@property (nonatomic) double wait;
@property (nonatomic) double interval;
@property (nonatomic) long long count;
@property (nonatomic) long long trafficClass;
@property (nonatomic) unsigned long long dataLength;
@property (nonatomic) double packetLoss;
@property (nonatomic) double min;
@property (nonatomic) double max;
@property (nonatomic) double avg;
@property (nonatomic) double stddev;
@property (copy, nonatomic) NSString *command;
@property (copy, nonatomic) NSString *output;
@property (nonatomic) double timestamp;
@property (nonatomic) double startedAt;
@property (nonatomic) double endedAt;

- (void)encodeWithCoder:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (double)timestamp;
- (id)description;

@end
