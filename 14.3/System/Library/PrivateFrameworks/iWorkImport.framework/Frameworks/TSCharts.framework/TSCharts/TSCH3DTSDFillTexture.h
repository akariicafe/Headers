@class TSDFill;

@interface TSCH3DTSDFillTexture : TSCH3DTexture {
    TSDFill *mFill;
}

+ (id)textureWithTSDFill:(id)a0;

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasCompleteData;
- (id)databufferForDataCache:(id)a0;
- (id)initWithTSDFill:(id)a0;

@end
