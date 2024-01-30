@interface SPSchedulerInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long advertisementCount;
@property (nonatomic) long long priorityCount;
@property (nonatomic) long long lowBatteryCount;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
