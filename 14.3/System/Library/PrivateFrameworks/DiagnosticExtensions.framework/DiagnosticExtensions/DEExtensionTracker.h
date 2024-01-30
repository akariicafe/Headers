@interface DEExtensionTracker : NSObject

+ (void)checkIn;
+ (id)userDefaults;
+ (id)currentLoggingExtensions;
+ (void)_updateExtensionExpirationDateWithIdentifier:(id)a0 expirationDate:(id)a1;
+ (void)saveCurrentLoggingExtensionsWithDictionary:(id)a0;
+ (double)xpcActivityTimeinterval;
+ (void)scheduleXPCActivity;
+ (id)criteria:(id)a0;
+ (void)extensionTrackerCleanup;
+ (void)updateRetainCountWithIdentifier:(id)a0 session:(id)a1 offsetBy:(int)a2;
+ (BOOL)shouldSetupWithIdentifier:(id)a0 session:(id)a1 expirationDate:(id)a2;
+ (BOOL)shouldTeardownWithIdentifier:(id)a0 session:(id)a1;
+ (id)sharedSerialQueue;
+ (void)_updateXPCActivityDate;
+ (BOOL)hasInactiveLoggingSession:(id)a0;
+ (void)increaseRetainCountWithIdentifier:(id)a0 session:(id)a1;
+ (void)updateExpirationDateWithIdentifier:(id)a0 expirationDate:(id)a1;
+ (void)decreaseRetainCountWithIdentifier:(id)a0 session:(id)a1;

@end
