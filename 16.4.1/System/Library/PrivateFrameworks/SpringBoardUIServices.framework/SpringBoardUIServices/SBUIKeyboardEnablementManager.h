@class NSHashTable;

@interface SBUIKeyboardEnablementManager : NSObject {
    NSHashTable *_disabledContexts;
    BOOL _disabled;
}

+ (id)sharedInstance;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)disableAutomaticAppearanceForContext:(id)a0;
- (void)enableAutomaticAppearanceForContext:(id)a0;

@end
