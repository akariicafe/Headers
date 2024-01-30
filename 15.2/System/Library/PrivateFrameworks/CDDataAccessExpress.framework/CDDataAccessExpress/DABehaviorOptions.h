@interface DABehaviorOptions : NSObject

+ (void)initialize;
+ (BOOL)compressRequests;
+ (id)APSEnv;
+ (BOOL)isAppleInternalInstall;
+ (void)_startListeningForNotifications;
+ (BOOL)CFNetworkLogging;
+ (BOOL)completelyIgnoreNotes;
+ (BOOL)isInHoldingPattern;
+ (BOOL)promptForAllCerts;
+ (id)DAManagedDefaultForKey:(id)a0;
+ (BOOL)babysitterEnabled;
+ (BOOL)calDAVRemindersForAll;
+ (BOOL)alwaysUseCalendarHomeSync;
+ (BOOL)_shouldForceCookies:(BOOL *)a0;
+ (id)_daManagedDefaultsPath;
+ (id)DAManagedDefaults;
+ (BOOL)setDAManagedDefaults:(id)a0;
+ (BOOL)ignoreSupportedCommands;
+ (int)refreshThrottleTime;
+ (BOOL)ignoreBadLDAPCerts;
+ (double)defaultEASTaskTimeoutOutWasFound:(BOOL *)a0;
+ (double)defaultDAVProbeTimeout;
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
+ (int)numForgivable401s;
+ (BOOL)isEASParsingLogEnabled;
+ (BOOL)orphanCheckEnabled;
+ (BOOL)addDAManagedDefaults:(id)a0;
+ (void)removeDAManagedDefaults:(id)a0;
+ (id)allowlistedEASProtocols;
+ (long long)rem_changeTrackingBehaviors;

@end
