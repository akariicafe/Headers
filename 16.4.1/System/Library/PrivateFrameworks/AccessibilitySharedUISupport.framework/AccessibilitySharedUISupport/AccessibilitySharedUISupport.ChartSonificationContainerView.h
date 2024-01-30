@class AXChartDescriptor, NSAttributedString;

@interface AccessibilitySharedUISupport.ChartSonificationContainerView : UIView <AXChart> {
    void /* unknown type, empty encoding */ chartDescriptor;
    void /* unknown type, empty encoding */ playheadView;
    void /* unknown type, empty encoding */ playheadLabel;
    void /* unknown type, empty encoding */ playheadTimer;
    void /* unknown type, empty encoding */ displayLink;
    void /* unknown type, empty encoding */ numberFormatter;
    void /* unknown type, empty encoding */ state;
}

@property (nonatomic, retain) AXChartDescriptor *accessibilityChartDescriptor;
@property (nonatomic) BOOL isAccessibilityElement;
@property (nonatomic, retain) NSAttributedString *accessibilityAttributedLabel;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_accessibilityDidChangeSonificationPlaybackPosition:(double)a0;
- (void)_accessibilitySonificationPlaybackStatusChanged:(unsigned long long)a0;
- (void)updatePlayhead:(double)a0;

@end
