@class UIActionSheetiOSDismissActionView, UIColor, NSString;

@interface _UIActionSheetPresentationControllerVisualStyleiOS : NSObject <UIActionSheetPresentationControllerVisualStyle>

@property (retain, nonatomic) UIActionSheetiOSDismissActionView *dismissActionView;
@property (readonly) double dismissToContentSpacing;
@property (readonly) UIColor *dimmingViewColor;
@property (readonly) double cornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetsForContainerView:(id)a0;

@end
