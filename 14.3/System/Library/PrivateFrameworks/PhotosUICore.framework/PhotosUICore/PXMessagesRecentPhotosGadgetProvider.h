@class UIViewController;
@protocol PXPhotoLibraryPresenting;

@interface PXMessagesRecentPhotosGadgetProvider : PXGadgetProvider

@property (retain, nonatomic) UIViewController<PXPhotoLibraryPresenting> *recentPhotosViewController;
@property (nonatomic) double preferredHeight;

- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (void).cxx_destruct;
- (void)loadDataForGadgets;

@end
