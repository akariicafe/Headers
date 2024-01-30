@class NSHashTable, NSString, NSArray, TPKContentViewController, NSDate, TPKContent, TPSMiniTipContentManager, NSObject, TPSDuetEventsProvider;
@protocol OS_dispatch_queue;

@interface TPKContentController : NSObject <TPKContentViewDelegate, TPKTipContentHintViewDelegate, TPSEventsProviderDelegate, TPSConstellationContentParserDelegate> {
    BOOL _contentOnScreen;
    BOOL _enterForegroundNotificationRegistered;
    BOOL _allowsOverrides;
    BOOL _userPerformedDesiredOutcome;
    BOOL _userPerformedContentDesiredOutcome;
    BOOL _displayTestContent;
    NSDate *_nextAllowedCheckDate;
    NSDate *_lastContentValidateDate;
    NSArray *_currentContext;
    NSObject<OS_dispatch_queue> *_checkQueue;
    TPSDuetEventsProvider *_duetEventsProvider;
}

@property (nonatomic) long long state;
@property (retain, nonatomic) TPKContent *content;
@property (retain, nonatomic) NSString *context;
@property (retain, nonatomic) NSHashTable *delegates;
@property (retain, nonatomic) TPSMiniTipContentManager *miniTipContentManager;
@property (copy, nonatomic, getter=_contentTitle, setter=_setContentTitle:) NSString *_contentTitle;
@property (copy, nonatomic, getter=_contentText, setter=_setContentText:) NSString *_contentText;
@property (retain, nonatomic) TPKContentViewController *currentPopOverController;
@property (readonly, nonatomic) BOOL contentDismissedByUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_identifierForContext:(id)a0;
+ (id)_legacyIdentifierForContext:(id)a0;

- (void)removeDelegate:(id)a0;
- (id)initWithContext:(id)a0;
- (void)addDelegate:(id)a0;
- (void)contentDisplayDelay;
- (id)createContentViewWithContent:(id)a0;
- (id)attributedStringForContent:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)_updateCachedContent:(id)a0;
- (void)registerCustomContentView:(id)a0;
- (void)_tipContentHintViewCloseButtonTapped:(id)a0;
- (void)_tipContentHintViewContentViewNeedsLayout:(id)a0 reason:(unsigned long long)a1;
- (void)dealloc;
- (void)addDelegate:(id)a0 content:(id)a1;
- (id)_createContentViewWithContent:(id)a0 asPopover:(BOOL)a1;
- (id)_tipContentHintView:(id)a0 iconForCustomizationID:(long long)a1;
- (void)dataProvider:(id)a0 didFinishQueryWithResults:(id)a1;
- (void)_contentDidDismiss:(id)a0;
- (void)_registerCallbackForDismissalEvents:(id)a0;
- (void)_clearCachedContent;
- (void)removeDelegate:(id)a0 content:(id)a1;
- (void)showTestContent;
- (void)cancelContentDisplayDelay;
- (void)dataProvider:(id)a0 didReceiveCallbackWithResult:(id)a1;
- (id)constellationContentParser:(id)a0 personalizedStringForID:(unsigned long long)a1;
- (BOOL)_isCacheContentValidForBundleID:(id)a0;
- (void)checkForContentForBundleID:(id)a0;
- (void)_tipContentHintView:(id)a0 actionTapped:(id)a1;
- (void)notifyEventOccurred:(long long)a0 content:(id)a1 context:(id)a2;
- (void)unregisterEnterForegroundNotification;
- (id)_cachedContent;
- (void)_contentViewWillBeRemoved:(id)a0;
- (void)checkForContent;
- (void)_deregisterCallbackForDismissalEvents:(id)a0;
- (void)notifyDelegate:(id)a0 didFinishWithContent:(id)a1 animated:(BOOL)a2;
- (id)createContentViewControllerWithContent:(id)a0 sourceViewController:(id)a1;
- (void)notifyDelegate:(id)a0 contentDidBecomeAvailable:(id)a1 animated:(BOOL)a2;
- (void)applicationWillEnterForeground;
- (void)_contentDidDisplay:(id)a0;
- (void)_contentViewWillBeShown:(id)a0;
- (void)_clearLegacyCachedContent;
- (id)duetEventsFromContextualEvents:(id)a0;
- (void)_tipContentHintView:(id)a0 viewTappedForIdentifier:(id)a1;

@end
