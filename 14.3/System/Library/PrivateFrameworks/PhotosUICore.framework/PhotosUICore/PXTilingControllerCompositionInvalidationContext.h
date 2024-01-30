@class PXTilingController;
@protocol NSObject;

@interface PXTilingControllerCompositionInvalidationContext : NSObject

@property (retain, nonatomic) id<NSObject> animationOptions;
@property (retain, nonatomic) PXTilingController *originatingTilingController;

+ (id)defaultAnimationOptionsForTilingController:(id)a0 withInvalidationContexts:(id)a1;

- (void).cxx_destruct;
- (id)description;

@end
