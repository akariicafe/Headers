@interface DSTestAutomation : NSObject

@property (nonatomic) BOOL testAutomationEnabled;

+ (id)sharedInstance;
+ (void)postInteractiveTestEvent:(id)a0 info:(id)a1;
+ (void)postConfiguration:(id)a0;

- (id)init;

@end
