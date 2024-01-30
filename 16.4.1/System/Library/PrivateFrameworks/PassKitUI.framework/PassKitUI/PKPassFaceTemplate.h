@class NSMutableArray, PKPassFieldTemplate;

@interface PKPassFaceTemplate : NSObject

@property (retain, nonatomic) NSMutableArray *bucketTemplates;
@property (nonatomic) double barcodeBottomInset;
@property (nonatomic) struct CGSize { double width; double height; } barcodeMaxSize;
@property (retain, nonatomic) PKPassFieldTemplate *defaultFieldTemplate;

- (void).cxx_destruct;
- (void)addBucketTemplate:(id)a0;
- (id)templateForBucketAtIndex:(unsigned long long)a0;

@end
