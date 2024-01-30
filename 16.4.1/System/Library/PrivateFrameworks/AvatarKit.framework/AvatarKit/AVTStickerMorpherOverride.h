@class NSString;

@interface AVTStickerMorpherOverride : NSObject

@property (readonly, copy, nonatomic) id nodeNames;
@property (readonly, copy, nonatomic) NSString *morpher;
@property (readonly, nonatomic) float value;

+ (id)morpherOverrideFromDictionary:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)applyToHierarchy:(id)a0 reversionContext:(id)a1;
- (id)initWithNodeNames:(id)a0 morpher:(id)a1 value:(float)a2;

@end
