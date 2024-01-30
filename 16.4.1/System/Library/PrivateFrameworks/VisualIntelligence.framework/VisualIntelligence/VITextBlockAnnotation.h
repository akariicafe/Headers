@class NSString, NSArray;

@interface VITextBlockAnnotation : NSObject <NSCopying>

@property (nonatomic, readonly) NSString *description;
@property (readonly, nonatomic) NSArray *textAnnotations;

+ (id)empty;
+ (id)textBlockWithDocumentObservations:(id)a0;
+ (id)textBlockWithAnnotations:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTextAnnotations:(id)a0;

@end
