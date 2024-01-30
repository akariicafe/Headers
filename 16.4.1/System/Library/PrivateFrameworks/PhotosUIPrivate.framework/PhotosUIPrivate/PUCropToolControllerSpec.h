@class UIColor, PXLabelSpec;

@interface PUCropToolControllerSpec : PUPhotoEditToolControllerSpec

@property (readonly, nonatomic) double cropRectMargin;
@property (readonly, nonatomic) double minimumCropInset;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } minimumCropSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } minimumCropHandleViewSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } cropActionButtonSize;
@property (readonly, nonatomic) double cropHandleViewLineThickness;
@property (readonly, nonatomic) double cropHandleViewLineMargin;
@property (readonly, nonatomic) double standardBottomBarWidth;
@property (readonly, nonatomic) double standardSideBarHeight;
@property (readonly, nonatomic) double leftInsetForiPad;
@property (readonly, nonatomic) double cropAspectRatioScrollHeight;
@property (readonly, nonatomic) double cropAspectFlipperWidth;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } cropAspectRatioScrollContentInset;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } cropAspectRatioButtonTitleInset;
@property (readonly, nonatomic) UIColor *cropAspectButtonColor;
@property (readonly, nonatomic) UIColor *cropAspectButtonSelectedColor;
@property (readonly, nonatomic) PXLabelSpec *cropHeaderLabelSpec;

- (double)standardBottomBarHeight;
- (double)standardSideBarWidth;

@end
