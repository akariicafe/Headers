@protocol _UITraitEnvironmentInternal;

@interface _UIBarCustomizationContainerView : UIView

@property (weak, nonatomic) id<_UITraitEnvironmentInternal> parentTraitEnvironment;
@property (copy, nonatomic) id /* block */ traitChangeHandler;

- (void)_traitCollectionDidChangeOnSubtreeInternal:(const struct _UITraitCollectionChangeDescription { id x0; id x1; BOOL x2; struct _UITraitCollectionTraitChanges { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; } x3; } *)a0;
- (id)traitCollection;
- (void).cxx_destruct;
- (id)initWithParentTraitEnvironment:(id)a0;

@end
