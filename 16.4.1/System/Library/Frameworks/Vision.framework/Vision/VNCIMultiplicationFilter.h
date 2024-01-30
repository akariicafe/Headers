@class NSNumber;

@interface VNCIMultiplicationFilter : VNCIFilter

@property (copy, nonatomic) NSNumber *inputFactor1;
@property (copy, nonatomic) NSNumber *inputFactor2;
@property (copy, nonatomic) NSNumber *inputFactor3;
@property (copy, nonatomic) NSNumber *inputFactor4;

- (id)outputImage;
- (id)init;
- (void).cxx_destruct;

@end
