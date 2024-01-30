@class NSArray;

@interface PKTextInputDebugTargetsView : UIView {
    double _dashLinePhase;
}

@property (copy, nonatomic) NSArray *visualizationElements;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
