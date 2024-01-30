@interface DEExtensionTracker : NSObject

+ (id)criteria:(id)a0;
+ (void)updateRetainCountWithIdentifier:(id)a0 session:(id)a1 offsetBy:(int)a2;
+ (void)checkIn;
+ (void)increaseRetainCountWithIdentifier:(id)a0 session:(id)a1;
+ (void)decreaseRetainCountWithIdentifier:(id)a0 session:(id)a1;
+ (void)updateExpirationDateWithIdentifier:(id)a0 expirationDate:(id)a1;
+ (void)saveCurrentLoggingExtensionsWithDictionary:(id)a0;
+ (id)userDefaults;
+ (void)_updateXPCActivityDate;
+ (BOOL)hasInactiveLoggingSession:(id)a0;
+ (void)scheduleXPCActivity;
+ (id)currentLoggingExtensions;
+ (id)sharedSerialQueue;
+ (double)xpcActivityTimeinterval;
+ (BOOL)shouldTeardownWithIdentifier:(id)a0 session:(id)a1;
+ (void)_updateExtensionExpirationDateWithIdentifier:(id)a0 expirationDate:(id)a1;
+ (BOOL)shouldSetupWithIdentifier:(id)a0 session:(id)a1 expirationDate:(id)a2;
+ (void)extensionTrackerCleanup;

@end
