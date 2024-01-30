@class NSSet, NSString, VMUVMRegionTracker, VMUTaskMemoryScanner;

@interface VMUTaskStackLogReader : VMUStackLogReaderBase <VMUStackLogReader> {
    unsigned long long _msl_payload_version;
}

@property (weak, nonatomic) VMUTaskMemoryScanner *scanner;
@property (readonly) unsigned int task;
@property (readonly) BOOL is64bit;
@property (readonly) BOOL inspectingLiveProcess;
@property (readonly) BOOL usesLiteMode;
@property (readonly) BOOL coldestFrameIsNotThreadId;
@property (readonly) VMUVMRegionTracker *regionTracker;
@property (readonly) struct _CSTypeRef { unsigned long long x0; unsigned long long x1; } symbolicator;
@property (retain, nonatomic) NSSet *excludedFrames;
@property (readonly) unsigned long long nodesInUniquingTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTask:(unsigned int)a0;
- (long long)getFramesForAddress:(unsigned long long)a0 size:(unsigned long long)a1 inLiteZone:(BOOL)a2 stackFramesBuffer:(unsigned long long *)a3;
- (long long)getFramesForNode:(unsigned int)a0 inLiteZone:(BOOL)a1 stackFramesBuffer:(unsigned long long *)a2;
- (id)vmuVMRegionForAddress:(unsigned long long)a0;
- (long long)getFramesForStackID:(unsigned long long)a0 stackFramesBuffer:(unsigned long long *)a1;
- (struct { unsigned long long x0; })liteMSLPayloadforVMregionAddress:(unsigned long long)a0;
- (void)dealloc;
- (int)enumerateMSLRecordsAndPayloads:(id /* block */)a0;
- (struct { unsigned long long x0; })liteMSLPayloadforMallocAddress:(unsigned long long)a0 size:(unsigned long long)a1;
- (id)initWithTask:(unsigned int)a0 symbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a1;
- (void).cxx_destruct;

@end
