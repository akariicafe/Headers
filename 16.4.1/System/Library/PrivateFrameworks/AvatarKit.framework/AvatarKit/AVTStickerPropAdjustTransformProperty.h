@class NSString;

@interface AVTStickerPropAdjustTransformProperty : NSObject

@property (readonly, nonatomic) long long presetCategory;
@property (readonly, nonatomic) NSString *presetValue;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ position;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ rotation;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ scale;

- (void).cxx_destruct;
- (void)applyAdjustmentIfNeededToNode:(id)a0 forMemoji:(id)a1 ignoreScaleZ:(BOOL)a2;
- (id)initWithPresetCategory:(id)a0 presetValue:(SEL)a1 position:(long long)a2 rotation:(id)a3 scale:(void /* unknown type, empty encoding */)a4;

@end
