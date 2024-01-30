@interface DABehaviorOptions : NSObject

+ (void)initialize;
+ (BOOL)compressRequests;
+ (BOOL)isAppleInternalInstall;
+ (BOOL)CFNetworkLogging;
+ (id)DAManagedDefaultForKey:(id)a0;
+ (BOOL)babysitterEnabled;
+ (BOOL)completelyIgnoreNotes;
+ (BOOL)isInHoldingPattern;
+ (BOOL)promptForAllCerts;
+ (id)APSEnv;
+ (void)_startListeningForNotifications;
+ (BOOL)_shouldForceCookies:(BOOL *)a0;
+ (BOOL)addDAManagedDefaults:(id)a0;
+ (BOOL)allIMAPServersSupportNotesSearch;
+ (BOOL)alwaysUseCalendarHomeSync;
+ (BOOL)calDAVRemindersForAll;
+ (BOOL)cookiesEnabled;
+ (BOOL)customAutoDV2UserAgentEnabled;
+ (double)defaultDAVProbeTimeout;
+ (double)defaultEASTaskTimeoutOutWasFound:(BOOL *)a0;
+ (BOOL)earlyPingEnabled;
+ (BOOL)enablePromptForServerTrust;
+ (double)holidayCalendarRefreshInterval;
+ (id)holidayCalendarURL;
+ (BOOL)ignoreBadLDAPCerts;
+ (BOOL)ignoreSupportedCommands;
+ (BOOL)isEASParsingLogEnabled;
+ (int)numForgivable401s;
+ (BOOL)orphanCheckEnabled;
+ (BOOL)perfLogging;
+ (int)refreshThrottleTime;
+ (void)removeDAManagedDefaults:(id)a0;
+ (BOOL)sendMeCardEverywhere;
+ (BOOL)useContactsFramerwork;
+ (BOOL)useThunderhillBetaServers;
+ (BOOL)writeOutBrokenCancelationRequests;
+ (id)DAManagedDefaults;
+ (id)_daManagedDefaultsPath;
+ (id)allowlistedEASProtocols;
+ (long long)rem_changeTrackingBehaviors;
+ (BOOL)setDAManagedDefaults:(id)a0;

@end
