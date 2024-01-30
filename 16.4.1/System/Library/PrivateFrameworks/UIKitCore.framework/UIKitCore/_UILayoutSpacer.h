@class NSArray, NSString, NSLayoutYAxisAnchor, NSLayoutDimension;

@interface _UILayoutSpacer : UILayoutGuide <UILayoutSupport>

@property (nonatomic, getter=_isHorizontal, setter=_setHorizontal:) BOOL _horizontal;
@property (nonatomic, setter=_setCompatibilityGuideAllowsArchivingAsSubview:) BOOL _compatibilityGuideAllowsArchivingAsSubview;
@property (copy, nonatomic, setter=_setConstraintsToRemoveAtRuntime:) NSArray *_constraintsToRemoveAtRuntime;
@property (copy, nonatomic, setter=_setArchivedIdentifier:) NSString *_archivedIdentifier;
@property (readonly, nonatomic) double length;
@property (readonly) NSLayoutYAxisAnchor *topAnchor;
@property (readonly) NSLayoutYAxisAnchor *bottomAnchor;
@property (readonly) NSLayoutDimension *heightAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_horizontalLayoutSpacer;
+ (id)_verticalLayoutSpacer;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)_setUpCounterDimensionConstraint;
- (id)_layoutVariablesWithAmbiguousValue;

@end
