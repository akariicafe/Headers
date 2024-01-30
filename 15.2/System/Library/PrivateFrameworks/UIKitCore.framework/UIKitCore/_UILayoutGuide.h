@class NSString, NSArray, NSLayoutYAxisAnchor, NSLayoutDimension;

@interface _UILayoutGuide : UIView <UILayoutSupport>

@property (nonatomic, getter=isHorizontal, setter=_setHorizontal:) BOOL _horizontal;
@property (copy, nonatomic, setter=_setArchivedIdentifier:) NSString *_archivedIdentifier;
@property (nonatomic, setter=_setAllowsArchivingAsSubview:) BOOL _allowsArchivingAsSubview;
@property (copy, nonatomic, setter=_setConstraintsToRemoveAtRuntime:) NSArray *_constraintsToRemoveAtRuntime;
@property (readonly, nonatomic) double length;
@property (readonly) NSLayoutYAxisAnchor *topAnchor;
@property (readonly) NSLayoutYAxisAnchor *bottomAnchor;
@property (readonly) NSLayoutDimension *heightAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)classFallbacksForKeyedArchiver;
+ (id)_verticalLayoutGuide;
+ (id)_horizontalLayoutGuide;

- (id)_layoutVariablesWithAmbiguousValue;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_isFloatingLayoutItem;
- (id)initWithCoder:(id)a0;
- (void)_setUpCounterDimensionConstraint;
- (void)dealloc;

@end
