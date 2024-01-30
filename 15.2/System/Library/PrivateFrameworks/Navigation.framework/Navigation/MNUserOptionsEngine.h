@class MNUserOptions, NSString, NSBundle, MNObserverHashTable;

@interface MNUserOptionsEngine : NSObject {
    NSBundle *_spokenBundle;
    MNObserverHashTable *_observers;
    NSString *_navSessionLanguage;
}

@property (readonly, nonatomic) NSString *currentVoiceLanguage;
@property (readonly, nonatomic) MNUserOptions *options;

+ (id)sharedInstance;

- (id)localizedStringForKey:(id)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)updateNavigationSessionLanguage:(id)a0;
- (void)update:(id)a0;
- (void)_updateSpokenBundle;

@end
