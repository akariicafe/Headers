@class CALayer;

@interface HUWaveformSlice : NSObject

@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic) double opacity;
@property (retain, nonatomic) CALayer *waveformlayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layerFrame;

- (void).cxx_destruct;
- (void)dealloc;

@end
