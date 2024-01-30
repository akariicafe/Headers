@class PXGSpriteReference;

@interface PXGDecorationReference : NSObject

@property (readonly, nonatomic) PXGSpriteReference *decoratedSpriteReference;
@property (readonly, nonatomic) long long decorationType;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDecoratedSpriteReference:(id)a0 decorationType:(long long)a1;

@end
