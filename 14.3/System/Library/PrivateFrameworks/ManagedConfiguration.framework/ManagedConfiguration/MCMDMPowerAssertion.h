@class UMUserSwitchBlockingTask, NSDate;

@interface MCMDMPowerAssertion : MCPowerAssertion

@property (readonly, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) UMUserSwitchBlockingTask *blockingTask;

+ (id)_dateFormatter;
+ (id)_currentAssertions;
+ (id)assertionDescriptions;

- (id)initWithReason:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;

@end
