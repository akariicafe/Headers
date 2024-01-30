@class NSString;

@interface _CPUINowPlayingLayout : NSObject <CPUINowPlayingLayoutProtocol>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } safeAreaFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewAreaFrame;
@property (nonatomic) double displayScale;
@property (nonatomic) BOOL showsArtwork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutMargins;
- (BOOL)isEqual:(id)a0;
- (struct CGSize { double x0; double x1; })maximumTitleViewSize;
- (id)initWithSafeArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 displayScale:(double)a2 showsArtwork:(BOOL)a3;
- (unsigned long long)artworkPosition;
- (double)albumArtWidthMultiplier;
- (double)_scaledWidth;
- (double)_scaledHeight;
- (double)_effectiveAlbumArtWidth;
- (struct CGSize { double x0; double x1; })maximumNowPlayingSize;
- (double)playModeControlButtonWidth;
- (double)playModeControlButtonSpacing;
- (BOOL)playModeControlButtonsFullWidth;
- (BOOL)progressViewFullWidth;
- (double)transportControlButtonHeight;
- (double)transportControlButtonSpacing;
- (unsigned long long)trackInfoFontStyle;
- (double)verticalEdgePadding;

@end
