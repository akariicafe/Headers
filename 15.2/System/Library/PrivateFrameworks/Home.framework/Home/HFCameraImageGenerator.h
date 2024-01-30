@class NSString;
@protocol HFCameraImageGeneratorDelegate;

@interface HFCameraImageGenerator : NSObject

@property (weak, nonatomic) id<HFCameraImageGeneratorDelegate> delegate;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) unsigned long long imagesExpected;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)generateImagesFromAsset:(id)a0 forOffsets:(id)a1 atSize:(struct CGSize { double x0; double x1; })a2 withKey:(id)a3;

@end
