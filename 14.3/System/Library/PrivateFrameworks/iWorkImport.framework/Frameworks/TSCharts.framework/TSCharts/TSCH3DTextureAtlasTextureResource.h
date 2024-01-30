@class TSCH3DTextureAtlasTexture;

@interface TSCH3DTextureAtlasTextureResource : TSCH3DResource <TSCHUnretainedParent> {
    TSCH3DTextureAtlasTexture *mParent;
}

- (id)get;
- (void)dealloc;
- (id)initWithParent:(id)a0;
- (void)clearParent;

@end
