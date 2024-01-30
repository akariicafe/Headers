@class CHSWidgetMetrics, NSString, CHSWidget, CHUISWidgetVisibilitySettings, CHSWidgetTintParameters, CHSInlineTextParameters;

@interface CHUISWidgetScene : UIWindowScene

@property (readonly, copy, nonatomic) CHSWidget *widget;
@property (readonly, nonatomic) CHSWidget *nullableWidget;
@property (readonly, copy, nonatomic) CHSWidgetMetrics *metrics;
@property (readonly, nonatomic) unsigned long long contentType;
@property (readonly, nonatomic) unsigned long long colorScheme;
@property (readonly, nonatomic) unsigned long long widgetPriority;
@property (readonly, copy, nonatomic) NSString *widgetHostIdentifier;
@property (readonly, copy, nonatomic) NSString *widgetConfigurationIdentifier;
@property (readonly, copy, nonatomic) CHUISWidgetVisibilitySettings *visibility;
@property (readonly, nonatomic, getter=areAnimationsPaused) BOOL animationsPaused;
@property (readonly, nonatomic, getter=isContentPaused) BOOL contentPaused;
@property (readonly, nonatomic, getter=shouldVisibleEntrySnapshot) BOOL visibleEntryShouldSnapshot;
@property (readonly, nonatomic) BOOL canAppearInSecureEnvironment;
@property (readonly, nonatomic) BOOL supportsLowLuminance;
@property (readonly, nonatomic) BOOL prefersUnredactedContentInLowLuminanceEnvironment;
@property (readonly, copy, nonatomic) CHSWidgetTintParameters *tintParameters;
@property (readonly, copy, nonatomic) CHSInlineTextParameters *inlineTextParameters;
@property (readonly, nonatomic) BOOL showsWidgetLabel;
@property (readonly, nonatomic, getter=isInteractionDisabled) BOOL interactionDisabled;
@property (readonly, copy, nonatomic) NSString *additionalSnapshotPresentationContext;
@property (readonly, copy, nonatomic) NSString *remoteViewControllerClassName;

- (id)_sceneSettings;

@end
