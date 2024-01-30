@interface DEExtensionTracker : NSObject

+ (id)criteria:(id)a0;
+ (void)decreaseRetainCountWithIdentifier:(id)a0 session:(id)a1;
+ (BOOL)hasInactiveLoggingSession:(id)a0;
+ (void)saveCurrentLoggingExtensionsWithDictionary:(id)a0;
+ (id)sharedSerialQueue;
+ (id)userDefaults;
+ (void)increaseRetainCountWithIdentifier:(id)a0 session:(id)a1;
+ (void)checkIn;
+ (void)updateExpirationDateWithIdentifier:(id)a0 expirationDate:(id)a1;
+ (id)currentLoggingExtensions;
+ (BOOL)shouldTeardownWithIdentifier:(id)a0 session:(id)a1;
+ (BOOL)shouldSetupWithIdentifier:(id)a0 session:(id)a1 expirationDate:(id)a2;
+ (double)xpcActivityTimeInterval;
+ (void)extensionTrackerCleanup;
+ (void)_updateXPCActivityDate;
+ (void)_updateExtensionExpirationDateWithIdentifier:(id)a0 expirationDate:(id)a1;
+ (void)updateRetainCountWithIdentifier:(id)a0 session:(id)a1 offsetBy:(int)a2;
+ (void)scheduleXPCActivity;

@end
