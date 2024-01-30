@class NSDictionary, TSUImage, NSString;

@interface TSDImmutableBrushStrokeStorage : NSObject <TSDBrushStrokeStorage>

@property (readonly, nonatomic) TSUImage *image;
@property (readonly, copy, nonatomic) NSDictionary *paths;
@property (readonly, copy, nonatomic) NSDictionary *bounds;
@property (readonly, copy, nonatomic) NSDictionary *textureIndices;
@property (readonly, copy, nonatomic) NSDictionary *options;
@property (readonly, copy, nonatomic) NSDictionary *lineEnds;
@property (readonly, nonatomic) unsigned long long totalSectionCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)p_totalSectionCountWithPaths:(id)a0;

- (void).cxx_destruct;
- (id)deepCopy;
- (id)initWithImage:(id)a0 paths:(id)a1 bounds:(id)a2 textureIndices:(id)a3 options:(id)a4 lineEnds:(id)a5;

@end
