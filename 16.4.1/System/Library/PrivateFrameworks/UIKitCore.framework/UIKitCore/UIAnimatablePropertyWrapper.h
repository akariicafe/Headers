@class UIAnimatableProperty;

@interface UIAnimatablePropertyWrapper : UIAnimatablePropertyBase

@property (readonly, nonatomic) UIAnimatableProperty *animatableProperty;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;

- (void)setTransformer:(id)a0;
- (id)transformer;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;

@end
