@class UMUserSwitchBlockingTask, NSDate;

@interface MDMPowerAssertion : DMCPowerAssertion

@property (readonly, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) UMUserSwitchBlockingTask *blockingTask;

+ (id)_dateFormatter;
+ (id)_currentAssertions;
+ (id)assertionDescriptions;

- (id)initWithReason:(id)a0;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;

@end
