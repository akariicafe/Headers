@interface AEGridOverlayLayoutInfo : NSObject <AETileLayoutInfo>

@property (readonly, nonatomic) struct CGSize { double width; double height; } _gradientImageSize;

- (struct CGSize { double x0; double x1; })tileSystemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithGradientImageSize:(struct CGSize { double x0; double x1; })a0;

@end
