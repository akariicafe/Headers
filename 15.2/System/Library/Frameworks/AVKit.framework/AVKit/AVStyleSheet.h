@class UIFont, UITraitCollection;

@interface AVStyleSheet : NSObject

@property (nonatomic) BOOL shouldUseCompactFullScreenSize;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (readonly, getter=shouldUseMacStyle) BOOL shouldUseMacStyle;
@property (readonly, getter=shouldUsePadStyle) BOOL shouldUsePadStyle;
@property (readonly, nonatomic) struct CGSize { double width; double height; } defaultItemInlineSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } defaultItemFullScreenSize;
@property (readonly, nonatomic) double standardPaddingFullScreen;
@property (readonly, nonatomic) double standardPaddingInline;
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

- (void).cxx_destruct;
- (id)initWithTraitCollection:(id)a0 shouldUseCompactFullScreenSize:(BOOL)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })playbackControlsViewLayoutMarginsForView:(id)a0 keyboardHeight:(double)a1 isFullScreen:(BOOL)a2;
- (void)_loadFontsIfNeeded;

@end
