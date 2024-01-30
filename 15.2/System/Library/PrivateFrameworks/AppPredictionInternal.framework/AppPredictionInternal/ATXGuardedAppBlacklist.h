@class NSMutableSet, NSMutableDictionary;

@interface ATXGuardedAppBlacklist : NSObject {
    NSMutableSet *_blacklist;
    NSMutableDictionary *_prefsChangeHandlers;
    int _nextPrefsChangeHandlerToken;
}

- (void).cxx_destruct;
- (id)init;

@end
