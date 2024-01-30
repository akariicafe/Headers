@class VIAnnotation, NSArray, NSData;

@interface VIVisualUnderstanding : NSObject <NSCopying>

@property (readonly, nonatomic) VIAnnotation *annotation;
@property (readonly, nonatomic) NSArray *imageRegions;
@property (readonly, nonatomic) NSData *payload;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithImageRegions:(id)a0 annotation:(id)a1 payload:(id)a2;
- (id)initWithImageRegions:(id)a0 payload:(id)a1;
- (id)initWithImageRegions:(id)a0 textBlockAnnotation:(id)a1 payload:(id)a2;

@end
