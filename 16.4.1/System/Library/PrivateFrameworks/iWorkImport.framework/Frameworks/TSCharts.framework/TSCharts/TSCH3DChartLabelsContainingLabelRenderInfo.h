@class TSCH3DSceneRenderPipeline, NSString;

@interface TSCH3DChartLabelsContainingLabelRenderInfo : NSObject

@property (readonly, nonatomic) struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } resourceIndex;
@property (readonly, nonatomic) float wrapWidth;
@property (readonly, nonatomic) struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } alignmentPadding;
@property (readonly, retain, nonatomic) TSCH3DSceneRenderPipeline *pipeline;
@property (readonly, nonatomic) struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } index;
@property (readonly, copy, nonatomic) NSString *renderString;
@property (readonly, nonatomic) struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } position;
@property (readonly, nonatomic) struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } offset;
@property (readonly, nonatomic) unsigned int alignment;
@property (readonly, nonatomic) struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } offset2D;
@property (readonly, nonatomic) float rotation;

+ (id)infoWithPipeline:(id)a0 index:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a1 resourceIndex:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a2 renderString:(id)a3 position:(struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })a4 offset:(struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })a5 alignment:(unsigned int)a6 wrapWidth:(float)a7 offset2D:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })a8 rotation:(float)a9 alignmentPadding:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })a10;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithPipeline:(id)a0 index:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a1 resourceIndex:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a2 renderString:(id)a3 position:(struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })a4 offset:(struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })a5 alignment:(unsigned int)a6 wrapWidth:(float)a7 offset2D:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })a8 rotation:(float)a9 alignmentPadding:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })a10;

@end
