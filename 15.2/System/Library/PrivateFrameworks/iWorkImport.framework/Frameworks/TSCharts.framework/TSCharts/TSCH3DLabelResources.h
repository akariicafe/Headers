@class TSCH3DTextureAtlas, NSMutableDictionary;
@protocol TSWPStyleProviding;

@interface TSCH3DLabelResources : TSCH3DStringIndexedResources {
    NSMutableDictionary *_cache;
}

@property (readonly, nonatomic) TSCH3DTextureAtlas *atlas;
@property (weak, nonatomic) id<TSWPStyleProviding> styleProvidingSource;

- (id)initWithSize:(const void *)a0;
- (void).cxx_destruct;
- (void)setParagraphStyle:(id)a0 atIndex:(const void *)a1;
- (void)setParagraphStyle:(id)a0 forKey:(unsigned long long)a1 atIndex:(const void *)a2;
- (id)resourceAtIndex:(const void *)a0 string:(id)a1 bitmapContextInfo:(id)a2 labelWidth:(double)a3;
- (id)paragraphStyleForKey:(unsigned long long)a0 defaultStyle:(id)a1;
- (id)prepareTextureAtlasWithSamples:(float)a0;

@end
