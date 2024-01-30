@class NSSet, NSString;

@interface NCNotificationOptions : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) NSSet *alertSuppressionContexts;
@property (readonly, copy, nonatomic) NSString *alternateActionLabel;
@property (readonly, nonatomic) BOOL dismissAutomatically;
@property (readonly, nonatomic) BOOL dismissAutomaticallyForCarPlay;
@property (readonly, nonatomic) BOOL overridesQuietMode;
@property (readonly, nonatomic) BOOL overridesDowntime;
@property (readonly, nonatomic) BOOL alertsWhenLocked;
@property (readonly, nonatomic) BOOL addToLockScreenWhenUnlocked;
@property (readonly, nonatomic) unsigned long long lockScreenPersistence;
@property (readonly, nonatomic) unsigned long long lockScreenPriority;
@property (readonly, nonatomic) unsigned long long realertCount;
@property (readonly, nonatomic) BOOL suppressesAlertsWhenAppIsActive;
@property (readonly, nonatomic) BOOL canPlaySound;
@property (readonly, nonatomic) BOOL canTurnOnDisplay;
@property (readonly, nonatomic) BOOL requestsFullScreenPresentation;
@property (readonly, nonatomic) BOOL preemptsPresentedNotification;
@property (readonly, nonatomic) BOOL displaysActionsInline;
@property (readonly, nonatomic) BOOL revealsAdditionalContentOnPresentation;
@property (readonly, nonatomic) BOOL suppressesTitleWhenLocked;
@property (readonly, nonatomic) BOOL suppressesSubtitleWhenLocked;
@property (readonly, nonatomic) BOOL suppressesBodyWhenLocked;
@property (readonly, nonatomic) BOOL playMediaWhenRaised;
@property (readonly, nonatomic) unsigned long long contentPreviewSetting;
@property (readonly, nonatomic) BOOL silencedByMenuButtonPress;
@property (readonly, nonatomic) BOOL overridesPocketMode;
@property (readonly, nonatomic) BOOL hideClearActionInList;
@property (readonly, nonatomic, getter=isNumberOfLinesInfinite) BOOL numberOfLinesInfinite;
@property (readonly, nonatomic) BOOL coalescesWhenLocked;
@property (readonly, nonatomic) BOOL preventsAutomaticLock;
@property (readonly, nonatomic) BOOL revealsAdditionalContentIfNoDefaultAction;
@property (readonly, nonatomic) BOOL lauchUsingSiriForCarPlayDefaultAction;
@property (readonly, nonatomic) BOOL allowActionsForCarPlay;
@property (readonly, nonatomic) BOOL hideCloseActionForCarPlay;
@property (readonly, nonatomic) BOOL shouldAnnounceForCarPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNotificationOptions:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;

@end
