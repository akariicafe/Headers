@class VMUDebugTimer, NSSet, NSString, NSData, VMUVMRegionTracker, VMUProcessObjectGraph, VMURangeToStringMap;

@interface VMUGraphStackLogReader : VMUStackLogReaderBase <NSSecureCoding, VMUStackLogReader> {
    VMUDebugTimer *_debugTimer;
    unsigned int _nodeNamespaceSize;
    unsigned int *_nodeToStackIndexTable;
    unsigned long long *_nodeToMSLPayloadTable;
    struct vmu_backtrace_uniquing_table_t { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; int x6; unsigned int x7; unsigned int x8; unsigned int x9; struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; } x10; } *_backtraceUniquingTable;
    struct backtrace_uniquing_table { } *_originalUniquingTable;
    VMURangeToStringMap *_functionNameRanges;
    VMURangeToStringMap *_sourceInfoRanges;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) VMUProcessObjectGraph *graph;
@property (retain, nonatomic) NSData *diskLogs;
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

- (long long)getFramesForAddress:(unsigned long long)a0 size:(unsigned long long)a1 inLiteZone:(BOOL)a2 stackFramesBuffer:(unsigned long long *)a3;
- (void)encodeWithCoder:(id)a0;
- (void)_parseSourceInfoString:(id)a0 intoComponents:(unsigned int *)a1;
- (long long)getFramesForNode:(unsigned int)a0 inLiteZone:(BOOL)a1 stackFramesBuffer:(unsigned long long *)a2;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })functionRangeContainingPCaddress:(unsigned long long)a0;
- (id)vmuVMRegionForAddress:(unsigned long long)a0;
- (void)enumerateUniquingTable:(id /* block */)a0;
- (id)initWithTask:(unsigned int)a0 symbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a1 graph:(id)a2 debugTimer:(id)a3 collectDisklogs:(BOOL)a4;
- (id)initWithCoder:(id)a0;
- (long long)getFramesForStackID:(unsigned long long)a0 stackFramesBuffer:(unsigned long long *)a1;
- (unsigned int)sourceLineNumberForPCaddress:(unsigned long long)a0;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })binaryImageRangeForPCaddress:(unsigned long long)a0;
- (id)functionNameForPCaddress:(unsigned long long)a0;
- (void)_setFunctionName:(id)a0 forPCAddressRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a1;
- (id)binaryImagePathForPCaddress:(unsigned long long)a0;
- (void)populateBacktraceUniquingTableWithStackLogs:(id)a0;
- (void)dealloc;
- (BOOL)copyOriginalUniquingTable:(id)a0;
- (int)enumerateMSLRecordsAndPayloads:(id /* block */)a0;
- (void)streamFullStackLogsToBlock:(id /* block */)a0;
- (void)_setSourcePath:(id)a0 lineNumber:(unsigned int)a1 forPCAddressRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a2;
- (id)sourceFileNameForPCaddress:(unsigned long long)a0;
- (id)sourcePathForPCaddress:(unsigned long long)a0;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })sourceLineRangeContainingPCaddress:(unsigned long long)a0;
- (unsigned long long)stackIDForNode:(unsigned int)a0;
- (void)symbolicateBacktraceUniquingTable;
- (void).cxx_destruct;
- (id)sourceFileNameAndLineNumberForPCaddress:(unsigned long long)a0 fullPath:(BOOL)a1;

@end
