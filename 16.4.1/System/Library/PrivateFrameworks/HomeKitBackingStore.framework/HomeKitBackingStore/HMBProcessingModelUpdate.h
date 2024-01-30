@class HMBModel;

@interface HMBProcessingModelUpdate : HMBProcessingModelResult

@property (readonly) HMBModel *previousModel;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithModel:(id)a0 previousModel:(id)a1 options:(id)a2 mirrorOutputFuture:(id)a3;

@end
