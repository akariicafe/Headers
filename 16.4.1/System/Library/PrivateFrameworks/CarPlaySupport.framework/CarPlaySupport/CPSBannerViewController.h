@class UIViewController, NSString, CPSBannerItem, PLPlatterView, CPSGuidanceBannerView;
@protocol CPSBannerViewControllerDelegate, BNPresentableContext;

@interface CPSBannerViewController : UIViewController <BNPresentable>

@property (retain, nonatomic) PLPlatterView *platterView;
@property (retain, nonatomic) CPSGuidanceBannerView *bannerView;
@property (weak, nonatomic) id<CPSBannerViewControllerDelegate> delegate;
@property (readonly, nonatomic) CPSBannerItem *bannerItem;
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

@end
