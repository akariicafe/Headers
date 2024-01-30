@class HMBModel, HMBProcessingOptions, NAFuture;

@interface HMBProcessingModelResult : HMFObject

@property (readonly) HMBModel *model;
@property (readonly) HMBProcessingOptions *options;
@property (readonly) NAFuture *mirrorOutputFuture;

+ (id)alloc;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithModel:(id)a0 options:(id)a1 mirrorOutputFuture:(id)a2;

@end
