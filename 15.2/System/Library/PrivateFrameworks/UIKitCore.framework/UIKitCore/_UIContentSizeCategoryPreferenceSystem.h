@class UIContentSizeCategoryPreference;

@interface _UIContentSizeCategoryPreferenceSystem : UIContentSizeCategoryPreference {
    BOOL _observingNotification;
    BOOL _didCheckForPreferredContentSizeCategoryOverride;
    BOOL _applicationOverridesPreferredContentSizeCategory;
}

@property (retain, nonatomic) UIContentSizeCategoryPreference *overridePreferences;

- (void)_updateContentSizeCategoriesFromUserDefaultsPostingNotification:(BOOL)a0;
- (void)setPreferredContentSizeCategory:(id)a0;
- (id)initAsSystem;
- (void)checkForChanges;
- (void)_readAndObservePreferences;
- (void)_updateContentSizeCategory:(id)a0 carPlay:(id)a1 postingNotification:(BOOL)a2;
- (id)description;
- (void)_postContentSizeCategoryDidChangeNotification;
- (void).cxx_destruct;
- (void)_beginObservingPreferredContentSizeChangedNotification;
- (void)_endObservingPreferredContentSizeChangedNotification;
- (void)dealloc;

@end
