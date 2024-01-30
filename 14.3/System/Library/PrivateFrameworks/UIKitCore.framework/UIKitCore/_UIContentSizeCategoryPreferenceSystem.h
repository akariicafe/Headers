@class UIContentSizeCategoryPreference;

@interface _UIContentSizeCategoryPreferenceSystem : UIContentSizeCategoryPreference {
    BOOL _observingNotification;
    BOOL _didCheckForPreferredContentSizeCategoryOverride;
    BOOL _applicationOverridesPreferredContentSizeCategory;
}

@property (retain, nonatomic) UIContentSizeCategoryPreference *overridePreferences;

- (void)_endObservingPreferredContentSizeChangedNotification;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateContentSizeCategoriesFromUserDefaultsPostingNotification:(BOOL)a0;
- (void)setPreferredContentSizeCategory:(id)a0;
- (void)_updateContentSizeCategory:(id)a0 carPlay:(id)a1 postingNotification:(BOOL)a2;
- (id)description;
- (void)checkForChanges;
- (void)_readAndObservePreferences;
- (id)initAsSystem;
- (void)_postContentSizeCategoryDidChangeNotification;
- (void)_beginObservingPreferredContentSizeChangedNotification;

@end
