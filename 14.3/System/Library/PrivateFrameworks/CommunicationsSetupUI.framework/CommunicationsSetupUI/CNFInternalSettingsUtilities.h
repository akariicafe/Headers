@interface CNFInternalSettingsUtilities : NSObject

+ (void)signOutAllAccounts;
+ (id)currentInternalSettingsBundle;
+ (void)killImagent;
+ (void)killImavagent;
+ (void)killMediaServerd;
+ (void)nukeKeychain;
+ (void)killEverything;
+ (BOOL)isViceroyLoggingEnabled;
+ (void)setViceroyLoggingEnabled:(BOOL)a0;
+ (void)syncImagentLogSettings;
+ (void)killFaceTime;
+ (void)killMobilePhone;
+ (void)killMobileSMS;
+ (void)setCurrentInternalSettingsBundle:(id)a0;
+ (id)IDSEnvironment;
+ (void)setIDSEnvironment:(id)a0;

@end
