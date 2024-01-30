@class NSString, UIViewController, PLPillView;
@protocol BNPresentableContext, SBExternalDisplayEducationPillViewControllerDelegate;

@interface SBExternalDisplayEducationPillViewController : UIViewController <BNPresentable> {
    BOOL _extendedDisplayEnabled;
    PLPillView *_pillView;
}

@property (weak, nonatomic) id<SBExternalDisplayEducationPillViewControllerDelegate> delegate;
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

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)presentableDescription;
- (void)_handleSingleTap:(id)a0;
- (id)initWithExtendedDisplayEnabled:(BOOL)a0;
- (id)_pillSubtitleContentItem;
- (void)updateExtendedDisplayEnabled:(BOOL)a0;

@end
