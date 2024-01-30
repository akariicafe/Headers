@class TSCH3DTextureAtlas, NSMutableDictionary;

@interface TSCH3DLabelResources : TSCH3DStringIndexedResources {
    NSMutableDictionary *mCache;
}

@property (readonly, nonatomic) TSCH3DTextureAtlas *atlas;

- (id)initWithSize:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a0;
- (void)dealloc;
- (void)setParagraphStyle:(id)a0 atIndex:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a1;
- (void)setParagraphStyle:(id)a0 forKey:(unsigned long long)a1 atIndex:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a2;
- (id)resourceAtIndex:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a0 string:(id)a1 bitmapContextInfo:(id)a2 labelWidth:(double)a3;
- (id)paragraphStyleForKey:(unsigned long long)a0 defaultStyle:(id)a1;
- (id)prepareTextureAtlasWithSamples:(float)a0;

@end
