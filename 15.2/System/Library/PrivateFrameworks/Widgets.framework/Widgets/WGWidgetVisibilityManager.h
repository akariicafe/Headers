@class NSMutableDictionary, NSMutableSet;
@protocol WGWidgetVisibilityDelegate;

@interface WGWidgetVisibilityManager : NSObject {
    NSMutableDictionary *_widgetTagsByIdentifier;
    NSMutableDictionary *_extensionHashByIdentifier;
    NSMutableDictionary *_visibilityDefaultValueByIdentifier;
    NSMutableDictionary *_visibilityPreferenceByIdentifier;
    NSMutableSet *_visibilityOverridenIdentifiers;
    NSMutableSet *_mobileGestaltQuestions;
    struct MGNotificationTokenStruct { } *_mobileGestaltNotificationToken;
    BOOL _delegateRespondsToWidgetVisibilityDidChange;
}

@property (retain, nonatomic, getter=_mobileGestaltAnswerByWidgetTag) NSMutableDictionary *mobileGestaltAnswerByWidgetTag;
@property (weak, nonatomic) id<WGWidgetVisibilityDelegate> delegate;

- (void)_updateWidgetTagsAndIconVisibilityForExtension:(id)a0;
- (void)_widgetVisibilityChanged;
- (id)_allWidgetTags;
- (BOOL)_updateWidgetVisibilityPreference:(id)a0;
- (void)_widgetVisibilityPreferencesChanged;
- (void)updateVisibilityForExtensions:(id)a0;
- (id)_widgetTagsForWidgetExtensionInfoDictionary:(id)a0;
- (BOOL)isWidgetWithIdentifierVisible:(id)a0;
- (void).cxx_destruct;
- (void)_registerForVisiblityPreferenceChanges;
- (id)init;
- (void)_unregisterForVisiblityPreferenceChanges;
- (BOOL)_updateWidgetVisibilityPreferences;
- (void)_updateWidgetTagsAndVisibilityForExtensions:(id)a0;
- (void)_updateMobileGestaltQuestions;
- (void)dealloc;

@end
