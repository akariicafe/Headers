@class NSMapTable, UIStackView;

@interface PXHUDView : UIView

@property (retain, nonatomic) NSMapTable *visualizationToView;
@property (retain, nonatomic) UIStackView *stackView;

+ (Class)visualizationClassToViewClass:(Class)a0;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)addVisualization:(id)a0;
- (void)removeVisualization:(id)a0;

@end
