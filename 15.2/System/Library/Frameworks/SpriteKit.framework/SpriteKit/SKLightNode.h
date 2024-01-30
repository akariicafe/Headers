@class UIColor;

@interface SKLightNode : SKNode {
    void *_skcLightNode;
}

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (retain, nonatomic) UIColor *lightColor;
@property (retain, nonatomic) UIColor *ambientColor;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) double falloff;
@property (nonatomic) unsigned int categoryBitMask;

+ (BOOL)supportsSecureCoding;
+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyValueForPropertyWithName:(id)a0 onObject:(id)a1 outOptions:(id *)a2 outError:(id *)a3;

- (void)commonInit;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToNode:(id)a0;
- (void *)_makeBackingNode;
- (void)_didMakeBackingNode;
- (void)setLightCategoryBitMask:(unsigned int)a0;
- (void)setLightDecay:(double)a0;
- (double)lightDecay;
- (unsigned int)lightCategoryBitMask;

@end
