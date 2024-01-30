@class NSSet, NSString, VMUVMRegionTracker, VMUTaskMemoryScanner;

@interface VMUTaskStackLogReader : VMUStackLogReaderBase <VMUStackLogReader> {
    struct _CSTypeRef { unsigned long long _opaque_1; unsigned long long _opaque_2; } _symbolicator;
    unsigned long long _msl_payload_version;
}

@property (weak, nonatomic) VMUTaskMemoryScanner *scanner;
@property (readonly) unsigned int task;
@property (readonly) BOOL is64bit;
@property (readonly) BOOL inspectingLiveProcess;
@property (readonly) BOOL usesLiteMode;
@property (readonly) BOOL coldestFrameIsNotThreadId;
@property (readonly) VMUVMRegionTracker *regionTracker;
@property (retain, nonatomic) NSSet *excludedFrames;
@property (readonly) unsigned long long nodesInUniquingTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTask:(unsigned int)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)vmuVMRegionForAddress:(unsigned long long)a0;
- (long long)getFramesForStackID:(unsigned long long)a0 stackFramesBuffer:(unsigned long long *)a1;
- (long long)getFramesForNode:(unsigned int)a0 inLiteZone:(BOOL)a1 stackFramesBuffer:(unsigned long long *)a2;
- (id)binaryImagePathForPCaddress:(unsigned long long)a0;
- (id)functionNameForPCaddress:(unsigned long long)a0;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })functionRangeContainingPCaddress:(unsigned long long)a0;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })binaryImageRangeForPCaddress:(unsigned long long)a0;
- (int)enumerateRecords:(id /* block */)a0;
- (id)sourceFileNameAndLineNumberForPCaddress:(unsigned long long)a0 fullPath:(BOOL)a1;
- (int)enumerateMSLRecordsAndPayloads:(id /* block */)a0;
- (long long)getFramesForAddress:(unsigned long long)a0 size:(unsigned long long)a1 inLiteZone:(BOOL)a2 stackFramesBuffer:(unsigned long long *)a3;
- (id)sourcePathForPCaddress:(unsigned long long)a0;
- (id)sourceFileNameForPCaddress:(unsigned long long)a0;
- (unsigned int)sourceLineNumberForPCaddress:(unsigned long long)a0;
- (unsigned long long)liteModeStackIDforAddress:(unsigned long long)a0 size:(unsigned long long)a1;
- (unsigned long long)liteModeStackIDforVMregionAddress:(unsigned long long)a0;
- (struct { unsigned long long x0; })liteMSLPayloadforMallocAddress:(unsigned long long)a0 size:(unsigned long long)a1;
- (struct { unsigned long long x0; })liteMSLPayloadforVMregionAddress:(unsigned long long)a0;
- (id)initWithTask:(unsigned int)a0 symbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a1;

@end
