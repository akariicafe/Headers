@class NSArray, NSString;

@interface CRTextRecognizerModelEspressoInput : NSObject <CRTextRecognizerModelInput>

@property (nonatomic) struct vImage_Buffer { void *data; unsigned long long height; unsigned long long width; unsigned long long rowBytes; } img_input;
@property unsigned long long batchSize;
@property (retain) NSArray *textFeatureInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithImg_input:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 batchSize:(unsigned long long)a1 featureInfo:(id)a2;

@end
