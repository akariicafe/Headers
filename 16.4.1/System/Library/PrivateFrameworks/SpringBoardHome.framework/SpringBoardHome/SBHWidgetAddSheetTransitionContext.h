@class SBHWidgetAddSheetAnimationController, NSString, SBHAddWidgetSheetGalleryCollectionViewCell;

@interface SBHWidgetAddSheetTransitionContext : NSObject <UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) SBHAddWidgetSheetGalleryCollectionViewCell *sourceCell;
@property (retain, nonatomic) SBHWidgetAddSheetAnimationController *animationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
