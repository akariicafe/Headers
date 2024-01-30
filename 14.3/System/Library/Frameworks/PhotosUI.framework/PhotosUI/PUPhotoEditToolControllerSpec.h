@class UIColor, NSString;

@interface PUPhotoEditToolControllerSpec : PUViewControllerSpec <PUPhotoEditLayoutDynamicAdaptable>

@property (class, readonly, nonatomic) UIColor *toolPickerSelectionColor;

@property (readonly, nonatomic) double standardBottomBarHeight;
@property (readonly, nonatomic) double standardSideBarWidth;
@property (readonly, nonatomic) BOOL isiPadLayout;
@property (nonatomic) long long layoutOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setLayoutOrientation:(long long)a0 withTransitionCoordinator:(id)a1;

@end
