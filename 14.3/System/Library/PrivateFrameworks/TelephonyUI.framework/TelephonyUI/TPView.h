@interface TPView : UIView

@property (nonatomic, getter=isAccessiblityConstraintsEnabled) BOOL accessiblityConstraintsEnabled;
@property (nonatomic, getter=isConstraintsLoaded) BOOL constraintsLoaded;

+ (BOOL)requiresConstraintBasedLayout;

- (void)updateConstraintsConstants;
- (id)init;
- (void)updateFonts;
- (void)commonInit;
- (void)updateConstraints;
- (id)initWithCoder:(id)a0;
- (void)unloadConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)loadConstraints;
- (void)traitCollectionDidChange:(id)a0;

@end
