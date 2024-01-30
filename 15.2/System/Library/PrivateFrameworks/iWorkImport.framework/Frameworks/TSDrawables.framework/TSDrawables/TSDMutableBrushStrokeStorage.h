@class NSString, TSUImage, NSMutableDictionary;

@interface TSDMutableBrushStrokeStorage : NSObject <TSDBrushStrokeStorage>

@property (readonly, nonatomic) TSUImage *image;
@property (readonly, copy, nonatomic) NSMutableDictionary *paths;
@property (readonly, copy, nonatomic) NSMutableDictionary *bounds;
@property (readonly, copy, nonatomic) NSMutableDictionary *textureIndices;
@property (readonly, copy, nonatomic) NSMutableDictionary *options;
@property (readonly, copy, nonatomic) NSMutableDictionary *lineEnds;
@property (readonly, nonatomic) unsigned long long totalSectionCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_smoothPath:(id)a0;

- (void)setOption:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)deepCopy;
- (void)setImage:(id)a0;
- (void)setLineEnd:(id)a0 forKey:(id)a1;
- (void)addTextureIndex:(unsigned long long)a0 forKey:(id)a1;
- (void)addPath:(id)a0 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 shouldSmooth:(BOOL)a2 forKey:(id)a3;

@end
