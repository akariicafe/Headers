@class NSArray, NSMutableArray, NSData;

@interface MLCTensorOptimizerDeviceData : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *momentumVectors;
@property (retain, nonatomic) NSArray *velocityVectors;
@property (retain, nonatomic) NSArray *centerWeightVectors;
@property (retain, nonatomic) id gpuOps;
@property (retain, nonatomic) NSMutableArray *momentumData;
@property (retain, nonatomic) NSMutableArray *momentumDataBytes;
@property (retain, nonatomic) NSData *sourceBNNSDesc;
@property (retain, nonatomic) NSData *gradientBNNSDesc;

+ (id)optimizerDeviceData;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;

@end
