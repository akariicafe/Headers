@class NSString, UIViewController, NSHashTable;
@protocol FCActivityDescribing, BNTemplateItemProviding, BNPresentableContext, BNTemplateViewProviding;

@interface FCUIFocusEnablementIndicatorBannerPresentable : NSObject <BNPresentable, BNTemplateContentProviding, BNPresentableObservable> {
    NSHashTable *_observers;
}

@property (readonly, copy, nonatomic) id<FCActivityDescribing> activityDescription;
@property (readonly, nonatomic, getter=isActivityEnabled) BOOL activityEnabled;
@property (readonly, nonatomic) long long presentableBehavior;
@property (weak, nonatomic) id<BNPresentableContext> presentableContext;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) long long presentableType;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL providesTemplateContent;
@property (readonly, nonatomic) id<BNTemplateViewProviding> leadingTemplateViewProvider;
@property (readonly, nonatomic) id<BNTemplateViewProviding> trailingTemplateViewProvider;
@property (readonly, nonatomic) id<BNTemplateItemProviding> primaryTemplateItemProvider;
@property (readonly, nonatomic) id<BNTemplateItemProviding> secondaryTemplateItemProvider;
@property (readonly, copy, nonatomic) NSString *presentableAccessibilityIdentifier;

+ (id)accessibilityIdentifierForActivityDescription:(id)a0;

- (void)presentableDidDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void)_enumerateObserversRespondingToSelector:(SEL)a0 usingBlock:(id /* block */)a1;
- (void)presentableWillDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void)userInteractionDidEndForBannerForPresentable:(id)a0;
- (void)presentableDidAppearAsBanner:(id)a0;
- (void)userInteractionWillBeginForBannerForPresentable:(id)a0;
- (void)presentableWillAppearAsBanner:(id)a0;
- (void).cxx_destruct;
- (id)presentableDescription;
- (void)addPresentableObserver:(id)a0;
- (void)handleTemplateContentEvent:(long long)a0;
- (void)removePresentableObserver:(id)a0;
- (id)initWithActivityDescription:(id)a0 requesterIdentifier:(id)a1 enabled:(BOOL)a2;

@end
