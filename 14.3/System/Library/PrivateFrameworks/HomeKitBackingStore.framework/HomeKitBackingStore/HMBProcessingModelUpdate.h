@class HMBModel;

@interface HMBProcessingModelUpdate : HMBProcessingModelResult

@property (readonly) HMBModel *previousModel;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithModel:(id)a0 previousModel:(id)a1 options:(id)a2 mirrorOutputFuture:(id)a3;

@end
