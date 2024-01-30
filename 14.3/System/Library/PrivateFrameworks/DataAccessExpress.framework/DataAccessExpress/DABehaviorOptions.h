@interface DABehaviorOptions : NSObject

+ (void)initialize;
+ (BOOL)CFNetworkLogging;
+ (id)APSEnv;
+ (BOOL)useContactsFramework;
+ (BOOL)compressRequests;
+ (BOOL)completelyIgnoreNotes;
+ (BOOL)isInHoldingPattern;
+ (BOOL)promptForAllCerts;
+ (id)DAManagedDefaultForKey:(id)a0;
+ (BOOL)babysitterEnabled;
+ (BOOL)calDAVRemindersForAll;
+ (BOOL)alwaysUseCalendarHomeSync;
+ (BOOL)isAppleInternalInstall;
+ (void)_startListeningForNotifications;
+ (BOOL)_shouldForceCookies:(BOOL *)a0;
+ (id)_daManagedDefaultsPath;
+ (id)DAManagedDefaults;
+ (BOOL)setDAManagedDefaults:(id)a0;
+ (BOOL)ignoreSupportedCommands;
+ (int)refreshThrottleTime;
+ (BOOL)ignoreBadLDAPCerts;
+ (double)defaultEASTaskTimeoutOutWasFound:(BOOL *)a0;
+ (double)defaultDAVProbeTimeout;
+ (id)whitelistedEASProtocols;
+ (BOOL)cookiesEnabled;
+ (BOOL)enablePromptForServerTrust;
+ (BOOL)useThunderhillBetaServers;
+ (BOOL)perfLogging;
+ (BOOL)allIMAPServersSupportNotesSearch;
+ (BOOL)writeOutBrokenCancelationRequests;
+ (BOOL)sendMeCardEverywhere;
+ (BOOL)useContactsFramerwork;
+ (BOOL)earlyPingEnabled;
+ (BOOL)customAutoDV2UserAgentEnabled;
+ (id)holidayCalendarURL;
+ (double)holidayCalendarRefreshInterval;
+ (BOOL)isCustomerInstall;
+ (int)numForgivable401s;
+ (BOOL)isEASParsingLogEnabled;
+ (BOOL)orphanCheckEnabled;
+ (BOOL)addDAManagedDefaults:(id)a0;
+ (void)removeDAManagedDefaults:(id)a0;

@end
