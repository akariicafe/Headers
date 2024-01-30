@class PLClickPresentationInteractionManager, UIView, NSString, INInteraction, CRKCardPresentationConfiguration, UIViewController, APUILongLookViewController, CRKCardPresentation;
@protocol CRKCardViewControllerDelegate, WFIntentViewControllerDelegate, CRKCardViewControlling;

@interface WFIntentPlatterViewController : UIViewController <PLClickPresentationInteractionPresenting, PLClickPresentationInteractionManagerDelegate, APUILongLookViewControllerDelegate, APUILongLookViewControllerDataSource, CRKCardPresentationDelegate>

@property (readonly, nonatomic) APUILongLookViewController *longLookViewController;
@property (readonly, nonatomic) CRKCardPresentationConfiguration *configuration;
@property (readonly, nonatomic) CRKCardPresentation *cardPresentation;
@property (weak, nonatomic) UIView *sourceView;
@property (readonly, nonatomic) UIViewController<CRKCardViewControlling> *cardViewController;
@property (readonly, nonatomic) INInteraction *interaction;
@property (weak, nonatomic) id<WFIntentViewControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL requiresConfirmation;
@property (readonly, nonatomic) PLClickPresentationInteractionManager *clickPresentationInteractionManager;
@property (readonly, nonatomic) UIView *viewForPreview;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } initialPresentedFrameOfViewForPreview;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } finalPresentedFrameOfViewForPreview;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } finalDismissedFrameOfViewForPreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<CRKCardViewControllerDelegate> cardViewControllerDelegate;

+ (void)initialize;

- (void).cxx_destruct;
- (void)cardViewControllerDidLoad:(id)a0;
- (void)cardViewControllerBoundsDidChange:(id)a0;
- (id)presentedViewControllerForClickPresentationInteractionManager:(id)a0;
- (void)clickPresentationInteractionManager:(id)a0 willDismissPresentedContentWithTrigger:(long long)a1;
- (id)bundleIdentifierForAppIconInLongLook:(id)a0;
- (id)interfaceActionsForLongLook:(id)a0;
- (id)appIconImageForLongLook:(id)a0;
- (id)titleForLongLookHeaderInLongLook:(id)a0;
- (BOOL)fetchViewControllerForContentViewInLongLook:(id)a0 completion:(id /* block */)a1;
- (double)preferredContentHeightForLongLook:(id)a0;
- (void)longLookPlatterDidReceiveTap:(id)a0;
- (void)updateWithInteraction:(id)a0;
- (id)initWithInteraction:(id)a0 requiresConfirmation:(BOOL)a1;
- (void)confirmButtonTapped;
- (void)updateProgressIndicator:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)updatePlatterSize;
- (void)presentPlatterFromSourceView:(id)a0 completionHandler:(id /* block */)a1;
- (void)dismissPlatterWithCompletionHandler:(id /* block */)a0;

@end
