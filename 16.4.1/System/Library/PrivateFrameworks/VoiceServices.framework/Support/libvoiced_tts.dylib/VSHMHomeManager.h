@interface VSHMHomeManager : NSObject

+ (id)sharedInstance;
+ (id)init;

- (void)transferPreinstallErrorMessagesOfLanguage:(id)a0 voiceName:(id)a1 forAccessoryID:(id)a2;

@end
