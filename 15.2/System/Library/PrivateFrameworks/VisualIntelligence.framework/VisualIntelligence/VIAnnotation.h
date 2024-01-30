@class NSArray, VITextBlockAnnotation;

@interface VIAnnotation : NSObject <NSCopying>

@property (readonly, nonatomic) NSArray *nsfwAnnotations;
@property (readonly, nonatomic) NSArray *faceAnnotations;
@property (readonly, nonatomic) NSArray *humanAnnotations;
@property (readonly, nonatomic) VITextBlockAnnotation *textBlockAnnotation;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAnnotations:(id)a0 humanAnnotations:(id)a1 nsfwAnnotations:(id)a2 textBlockAnnotation:(id)a3;
- (id)initWithTextAnnotations:(id)a0;

@end
