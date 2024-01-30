@class NSString;

@interface CoreAudioKit.AULabeledMeterView : UIView {
    void /* unknown type, empty encoding */ peak;
    void /* unknown type, empty encoding */ peakFaderTrigger;
    void /* unknown type, empty encoding */ lastVoiceOverUpdate;
    void /* unknown type, empty encoding */ peakTimer;
    void /* unknown type, empty encoding */ margins;
    void /* unknown type, empty encoding */ axis;
    void /* unknown type, empty encoding */ meterLayer;
    void /* unknown type, empty encoding */ fillLayer;
    void /* unknown type, empty encoding */ peakLayer;
    void /* unknown type, empty encoding */ lineLayers;
    void /* unknown type, empty encoding */ labelLayers;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ meterLabelLayer;
}

@property (nonatomic) void /* unknown type, empty encoding */ level;
@property (nonatomic) void /* unknown type, empty encoding */ vertical;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) unsigned long long accessibilityTraits;

- (void)layoutSublayersOfLayer:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tintColorDidChange;
- (void)willMoveToSuperview:(id)a0;
- (void).cxx_destruct;
- (void)configureWithData:(id)a0;

@end
