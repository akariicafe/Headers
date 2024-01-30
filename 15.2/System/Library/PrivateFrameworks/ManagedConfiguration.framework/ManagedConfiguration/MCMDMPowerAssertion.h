@class UMUserSwitchBlockingTask, NSDate;

@interface MCMDMPowerAssertion : MCPowerAssertion

@property (readonly, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) UMUserSwitchBlockingTask *blockingTask;

+ (id)_dateFormatter;
+ (id)_currentAssertions;
+ (id)assertionDescriptions;

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithReason:(id)a0;

@end
