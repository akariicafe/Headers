@class _CDContextualChangeRegistration;
@protocol _CDContext;

@interface SUCSScheduler : NSObject {
    id<_CDContext> _context;
    _CDContextualChangeRegistration *_registration;
}

+ (int)_batteryLevel;
+ (BOOL)_callInProgress;
+ (id)networkPredicate:(BOOL)a0;
+ (id)phoneCallPredicate:(BOOL)a0;
+ (id)carplayPredicate:(BOOL)a0;
+ (id)batteryLevelPredicate:(id)a0;
+ (int)_getIntForKeyPath:(id)a0;
+ (BOOL)_getBoolForKeyPath:(id)a0;
+ (BOOL)_hasNetworkConnection;

- (id)init;
- (void)dealloc;
- (void)unregisterInstallationAlertAction;
- (void)registerInstallAlertConditionsWithHandler:(id /* block */)a0;

@end
