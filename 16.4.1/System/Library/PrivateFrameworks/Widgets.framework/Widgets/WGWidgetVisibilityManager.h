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

- (BOOL)_updateWidgetVisibilityPreferences;
- (BOOL)isWidgetWithIdentifierVisible:(id)a0;
- (id)_allWidgetTags;
- (void)_updateWidgetTagsAndVisibilityForExtensions:(id)a0;
- (void)_widgetVisibilityPreferencesChanged;
- (void)dealloc;
- (void)_unregisterForVisiblityPreferenceChanges;
- (BOOL)_updateWidgetVisibilityPreference:(id)a0;
- (void)_updateWidgetTagsAndIconVisibilityForExtension:(id)a0;
- (void)_widgetVisibilityChanged;
- (id)_widgetTagsForWidgetExtensionInfoDictionary:(id)a0;
- (id)init;
- (void)updateVisibilityForExtensions:(id)a0;
- (void)_registerForVisiblityPreferenceChanges;
- (void)_updateMobileGestaltQuestions;
- (void).cxx_destruct;

@end
