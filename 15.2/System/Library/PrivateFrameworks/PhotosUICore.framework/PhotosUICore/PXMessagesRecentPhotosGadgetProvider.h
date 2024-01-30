@class UIViewController;
@protocol PXPhotoLibraryPresenting;

@interface PXMessagesRecentPhotosGadgetProvider : PXGadgetProvider

@property (retain, nonatomic) UIViewController<PXPhotoLibraryPresenting> *recentPhotosViewController;
@property (nonatomic) double preferredHeight;

- (void).cxx_destruct;
- (void)loadDataForGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;

@end
