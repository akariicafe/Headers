@class NSMutableIndexSet;

@interface PXGSpriteMetadataStore : NSObject {
    unsigned short _resizableCapInsetsCapacity;
    unsigned short _effectsCapacity;
    NSMutableIndexSet *_reusableEffectIds;
}

@property (readonly, nonatomic) unsigned short numberOfResizableCapInsets;
@property (readonly, nonatomic) struct { float x0; float x1; float x2; float x3; } *resizableCapInsets;
@property (readonly, nonatomic) unsigned short numberOfEffects;
@property (readonly, nonatomic) struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; unsigned int x8; unsigned short x9; } *effectData;
@property (readonly, nonatomic) int *effectShaderFlags;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeEffectWithId:(unsigned short)a0;
- (struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; unsigned int x8; unsigned short x9; } *)dataForEffectId:(unsigned short)a0;
- (unsigned short)addEffectWithType:(unsigned short)a0 shaderFlags:(int)a1;
- (unsigned short)addResizableCapInsets:(struct { float x0; float x1; float x2; float x3; })a0;
- (unsigned short)_indexOfResizableCapInsets:(struct { float x0; float x1; float x2; float x3; })a0;

@end
