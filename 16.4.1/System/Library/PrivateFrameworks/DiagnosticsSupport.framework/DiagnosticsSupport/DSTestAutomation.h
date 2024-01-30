@interface DSTestAutomation : NSObject

@property (nonatomic) BOOL testAutomationEnabled;

+ (id)sharedInstance;
+ (void)postConfiguration:(id)a0;
+ (void)postInteractiveTestEvent:(id)a0 info:(id)a1;

- (id)init;

@end
