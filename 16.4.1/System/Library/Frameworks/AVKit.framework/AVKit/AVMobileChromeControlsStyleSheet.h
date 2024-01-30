@class UIFont;

@interface AVMobileChromeControlsStyleSheet : AVMobileControlsStyleSheet {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _fullscreenInsets;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _embeddedInlineInsets;
    double _standardPaddingFullScreen;
    double _standardPaddingInline;
    BOOL _shouldUseCompactFullScreenSize;
}

@property (readonly, nonatomic) struct CGSize { double width; double height; } defaultItemInlineSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } defaultItemFullScreenSize;
@property (readonly, nonatomic) double standardInteritemPadding;
@property (readonly, nonatomic) double additionalInlinePaddingForDodgingSafeArea;
@property (readonly, nonatomic) struct CGSize { double width; double height; } routePickerButtonInlineSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } routePickerButtonFullScreenSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } audioRoutePickerFullScreenSize;
@property (readonly, nonatomic) double volumeSliderInlineWidth;
@property (readonly, nonatomic) double volumeSliderCompactFullScreenWidth;
@property (readonly, nonatomic) double volumeSliderRegularFullScreenWidth;
@property (readonly, nonatomic) double volumeSliderPadding;
@property (readonly, nonatomic) struct CGSize { double width; double height; } volumeButtonInlineSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } volumeButtonFullScreenSize;
@property (readonly, nonatomic) double minimumProminentPlayButtonDimension;
@property (readonly, nonatomic) double maximumProminentPlayButtonDimension;
@property (readonly, nonatomic) double maximumTransportControlsWidth;
@property (readonly, nonatomic) double maximumMultiRowTransportControlsWidth;
@property (readonly, nonatomic) double minimumTransportControlsWidth;
@property (readonly, nonatomic) double minimumSingleButtonTransportControlsWidth;
@property (readonly, nonatomic) struct CGSize { double width; double height; } minimumScrubberSize;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } doubleRowLayoutMargins;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } doubleRowLayoutMarginsWhenShowingScrubInstructions;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } doublerowLayoutMarginsWhenShowingCustomContentInfo;
@property (readonly, nonatomic) double spacingBetweenScrubInstructionsAndScrubber;
@property (readonly, nonatomic) double liveBroadcastLabelTopToBackdropTopDistance;
@property (readonly, nonatomic) UIFont *infoLabelFont;
@property (readonly, nonatomic) UIFont *scrubberTimeLabelFont;
@property (readonly, nonatomic) UIFont *scrubberInfoLabelFont;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })embeddedInlineInsets;
- (double)standardPaddingFullScreen;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })landscapeFullscreenInsets;
- (double)standardPaddingInline;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })portraitFullscreenInsets;
- (id)initWithTraitCollection:(id)a0 shouldUseCompactFullScreenSize:(BOOL)a1;

@end
