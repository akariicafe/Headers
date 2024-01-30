@interface CNFInternalSettingsUtilities : NSObject

+ (void)signOutAllAccounts;
+ (id)IDSEnvironment;
+ (void)killMobilePhone;
+ (id)currentInternalSettingsBundle;
+ (BOOL)isViceroyLoggingEnabled;
+ (void)killEverything;
+ (void)killFaceTime;
+ (void)killImagent;
+ (void)killImavagent;
+ (void)killMediaServerd;
+ (void)killMobileSMS;
+ (void)nukeKeychain;
+ (void)setCurrentInternalSettingsBundle:(id)a0;
+ (void)setIDSEnvironment:(id)a0;
+ (void)setViceroyLoggingEnabled:(BOOL)a0;
+ (void)syncImagentLogSettings;

@end
