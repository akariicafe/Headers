@interface _UISheetDetent : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) _UISheetDetent *_mediumDetent;
@property (class, readonly, nonatomic) _UISheetDetent *_largeDetent;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long _identifier;
@property (readonly, nonatomic) id /* block */ _internalBlock;
@property (readonly, nonatomic) double _constant;

+ (id)_detentWithContainerViewBlock:(id /* block */)a0;
+ (id)_constantDetent:(double)a0;

- (id)awakeAfterUsingCoder:(id)a0;
- (id)initWithIdentifier:(long long)a0 internalBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (double)_resolvedOffsetInContainerView:(id)a0 fullHeightFrameOfPresentedView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 bottomAttached:(BOOL)a2;
- (void)encodeWithCoder:(id)a0;

@end
