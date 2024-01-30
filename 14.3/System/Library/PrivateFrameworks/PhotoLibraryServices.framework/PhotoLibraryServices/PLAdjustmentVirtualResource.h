@class NSNumber;

@interface PLAdjustmentVirtualResource : PLVirtualResource

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (copy, nonatomic) NSNumber *cachedDataLength;

- (long long)dataLength;
- (void).cxx_destruct;
- (id)adjustmentDictionary;
- (id)initWithAdjustmentFilePath:(id)a0 forAsset:(id)a1;
- (long long)estimatedDataLength;

@end
