@class NSString, AFMemoryInfo;

@interface _AFMemoryInfoMutation : NSObject <AFMemoryInfoMutating> {
    AFMemoryInfo *_baseModel;
    unsigned long long _virtualMemorySizeInBytes;
    int _numberOfRegions;
    int _pageSizeInBytes;
    unsigned long long _residentMemorySizeInBytes;
    unsigned long long _peakResidentMemorySizeInBytes;
    unsigned long long _physicalMemoryFootprintInBytes;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasVirtualMemorySizeInBytes : 1; unsigned char hasNumberOfRegions : 1; unsigned char hasPageSizeInBytes : 1; unsigned char hasResidentMemorySizeInBytes : 1; unsigned char hasPeakResidentMemorySizeInBytes : 1; unsigned char hasPhysicalMemoryFootprintInBytes : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)generate;
- (void)setVirtualMemorySizeInBytes:(unsigned long long)a0;
- (void)setNumberOfRegions:(int)a0;
- (void)setPageSizeInBytes:(int)a0;
- (void)setResidentMemorySizeInBytes:(unsigned long long)a0;
- (void)setPeakResidentMemorySizeInBytes:(unsigned long long)a0;
- (void)setPhysicalMemoryFootprintInBytes:(unsigned long long)a0;
- (id)initWithBaseModel:(id)a0;

@end
