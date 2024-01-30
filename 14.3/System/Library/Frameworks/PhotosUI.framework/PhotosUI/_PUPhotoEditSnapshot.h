@class NSData, PHAdjustmentData;

@interface _PUPhotoEditSnapshot : NSObject

@property (nonatomic) long long workImageVersion;
@property (retain, nonatomic) PHAdjustmentData *adjustmentData;
@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) NSData *baseImageData;

- (void).cxx_destruct;
- (id)_copyData:(id)a0;

@end
