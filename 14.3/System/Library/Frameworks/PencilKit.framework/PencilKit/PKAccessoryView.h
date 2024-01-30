@class NSString, PKDragIndicatorView;

@interface PKAccessoryView : UIView <PKEdgeLocatable>

@property (retain, nonatomic) PKDragIndicatorView *dragIndicatorView;
@property (nonatomic) BOOL showsDragIndicator;
@property (nonatomic) unsigned long long edgeLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
