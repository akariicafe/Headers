@interface APClientInfoUI : APClientInfo

+ (id)sharedInstance;

- (id)initForTesting;
- (id)init;
- (void)orientationChanged:(id)a0;
- (void)dealloc;
- (id)keyboards;

@end
