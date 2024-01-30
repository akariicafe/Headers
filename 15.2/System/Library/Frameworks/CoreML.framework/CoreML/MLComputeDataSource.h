@class NSDictionary;

@interface MLComputeDataSource : NSObject

@property (readonly, nonatomic) NSDictionary *dataDictionary;

- (void).cxx_destruct;
- (id)initWithFeatureProvider:(id)a0 forPrediction:(BOOL)a1 neuralNetworkEngine:(id)a2 error:(id *)a3;
- (id)dataCHWFromPixelBuffer:(struct __CVBuffer { } *)a0 channelOrderIsBGR:(BOOL)a1 error:(id *)a2;
- (id)dataCHWFromPixelTypeGray8:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (id)dataCHWFromChanneledPixelType:(struct __CVBuffer { } *)a0 channelOrderIsBGR:(BOOL)a1 error:(id *)a2;
- (id)oneHotEncodedDataFromFeatureValue:(id)a0 withNNEngine:(id)a1 error:(id *)a2;

@end
