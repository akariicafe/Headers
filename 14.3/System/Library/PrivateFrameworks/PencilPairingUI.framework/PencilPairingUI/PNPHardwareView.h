@class PNPPencilView, PNPSyntheticPencilInteractionEventSource;

@interface PNPHardwareView : UIView {
    PNPPencilView *_pencilView;
    PNPSyntheticPencilInteractionEventSource *_eventSource;
}

@property (nonatomic) unsigned long long animationType;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
