@class TSUPair, TSCH3DPyramidBlurFBOResource;

@interface TSCH3DPyramidLevelResources : NSObject {
    TSUPair *mResourcePair;
}

@property (readonly, nonatomic) TSCH3DPyramidBlurFBOResource *finalResource;
@property (readonly, nonatomic) TSCH3DPyramidBlurFBOResource *temporaryResource;
@property (readonly, nonatomic) struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } size;

+ (id)resourcesWithFBOSize:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a0;

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithFBOSize:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a0;

@end
