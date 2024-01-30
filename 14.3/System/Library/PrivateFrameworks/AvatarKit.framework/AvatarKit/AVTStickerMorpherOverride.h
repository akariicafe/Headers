@class NSString;

@interface AVTStickerMorpherOverride : NSObject

@property (readonly, copy, nonatomic) NSString *geometry;
@property (readonly, copy, nonatomic) NSString *morpher;
@property (readonly, nonatomic) float value;

+ (id)morpherOverrideFromDictionary:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (void)applyToAvatar:(id)a0 reversionContext:(id)a1;
- (id)initWithGeometry:(id)a0 morpher:(id)a1 value:(float)a2;

@end
