@class PXTilingController;
@protocol NSObject;

@interface PXTilingControllerCompositionInvalidationContext : NSObject

@property (retain, nonatomic) id<NSObject> animationOptions;
@property (retain, nonatomic) PXTilingController *originatingTilingController;

+ (id)defaultAnimationOptionsForTilingController:(id)a0 withInvalidationContexts:(id)a1;

- (id)description;
- (void).cxx_destruct;

@end
