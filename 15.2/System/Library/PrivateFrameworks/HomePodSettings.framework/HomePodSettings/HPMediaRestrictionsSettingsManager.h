@class NSUserDefaults;
@protocol HPMediaRestrictionsSettingsManagerDelegate;

@interface HPMediaRestrictionsSettingsManager : NSObject {
    NSUserDefaults *_mediaPlaybackDefaults;
}

@property (weak, nonatomic) id<HPMediaRestrictionsSettingsManagerDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)homeKitMediaSettingForKeyPathChanged:(id)a0 updatedValue:(id)a1;
- (void)updateSoundCheckEnabled:(BOOL)a0;
- (void)_addObserverForLocalInfluencesSettingChange;
- (void)_removeObserverForLocalInfluencesSettingChange;

@end
