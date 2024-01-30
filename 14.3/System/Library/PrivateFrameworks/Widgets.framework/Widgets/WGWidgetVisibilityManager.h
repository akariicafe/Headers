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

- (void)_unregisterForVisiblityPreferenceChanges;
- (id)init;
- (id)_allWidgetTags;
- (void).cxx_destruct;
- (void)_updateWidgetTagsAndIconVisibilityForExtension:(id)a0;
- (void)dealloc;
- (BOOL)isWidgetWithIdentifierVisible:(id)a0;
- (void)_registerForVisiblityPreferenceChanges;
- (BOOL)_updateWidgetVisibilityPreference:(id)a0;
- (void)_widgetVisibilityChanged;
- (void)updateVisibilityForExtensions:(id)a0;
- (id)_widgetTagsForWidgetExtensionInfoDictionary:(id)a0;
- (void)_updateMobileGestaltQuestions;
- (void)_updateWidgetTagsAndVisibilityForExtensions:(id)a0;
- (BOOL)_updateWidgetVisibilityPreferences;
- (void)_widgetVisibilityPreferencesChanged;

@end
