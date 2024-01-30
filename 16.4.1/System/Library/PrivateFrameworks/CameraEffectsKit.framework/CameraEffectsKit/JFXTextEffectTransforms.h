@class PVMatrix44Double;

@interface JFXTextEffectTransforms : NSObject

@property (copy, nonatomic) PVMatrix44Double *transform;

+ (id)transformsWithEffect:(id)a0;
+ (id)transformsWithTransform:(id)a0;

- (id)initWithEffect:(id)a0;
- (void).cxx_destruct;
- (id)initWithTransform:(id)a0;
- (void)applyToEffect:(id)a0;

@end
