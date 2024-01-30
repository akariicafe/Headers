@class VIImage, VIVisualUnderstanding, VIQueryContext;

@interface VIParsedVisualQuery : NSObject <NSCopying>

@property (readonly, nonatomic) VIImage *image;
@property (readonly, nonatomic) VIVisualUnderstanding *visualUnderstanding;
@property (readonly, nonatomic) VIQueryContext *queryContext;

+ (id)queryWithPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 imageRegions:(id)a2 textBlockAnnotation:(id)a3 queryContext:(id)a4 payload:(id)a5;
+ (id)queryWithPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 imageRegions:(id)a2 payload:(id)a3;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithImage:(id)a0 visualUnderstanding:(id)a1 queryContext:(id)a2;
- (id)initWithImage:(id)a0 imageRegions:(id)a1 textBlockAnnotation:(id)a2 queryContext:(id)a3 payload:(id)a4;

@end
