@interface _MTLIndirectDrawIndexedPatchesArguments : NSObject {
    unsigned long long _patchIndexBufferOffset;
    unsigned long long _controlPointIndexBufferOffset;
}

@property (nonatomic) unsigned long long numberOfPatchControlPoints;
@property (nonatomic) unsigned long long patchStart;
@property (nonatomic) unsigned long long patchCount;
@property (nonatomic) void *patchIndexBufferVirtualAddress;
@property (nonatomic) void *controlPointIndexBufferVirtualAddress;
@property (nonatomic) unsigned long long instanceCount;
@property (nonatomic) unsigned long long baseInstance;

@end
