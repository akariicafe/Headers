@interface VNRecognizeDocumentElementsRequestElementConfiguration : NSObject <NSCopying>

@property BOOL recognize;
@property BOOL generateSegmentationMask;

+ (id)newConfiguration;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
