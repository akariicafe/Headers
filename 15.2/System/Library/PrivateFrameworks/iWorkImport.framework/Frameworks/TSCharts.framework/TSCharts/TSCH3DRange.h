@interface TSCH3DRange : NSObject

@property (readonly, nonatomic) struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } range;
@property (readonly, nonatomic) BOOL above;
@property (readonly, nonatomic) float signedScale;
@property (readonly, nonatomic) float scale;
@property (readonly, nonatomic) float offset;

+ (id)rangeWithIntercept:(float)a0 begin:(float)a1 end:(float)a2;

- (id).cxx_construct;
- (id)initWithIntercept:(float)a0 begin:(float)a1 end:(float)a2;

@end
