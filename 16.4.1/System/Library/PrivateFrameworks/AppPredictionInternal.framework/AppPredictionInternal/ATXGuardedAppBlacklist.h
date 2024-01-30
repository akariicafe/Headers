@class NSMutableSet, NSMutableDictionary;

@interface ATXGuardedAppBlacklist : NSObject {
    NSMutableSet *_blacklist;
    NSMutableDictionary *_prefsChangeHandlers;
    int _nextPrefsChangeHandlerToken;
}

- (id)init;
- (void).cxx_destruct;

@end
