@class VMUDebugTimer, NSSet, NSString, NSData, VMUVMRegionTracker, VMUProcessObjectGraph, VMURangeToStringMap;

@interface VMUGraphStackLogReader : VMUStackLogReaderBase <NSSecureCoding, VMUStackLogReader> {
    struct _CSTypeRef { unsigned long long _opaque_1; unsigned long long _opaque_2; } _symbolicator;
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
@property (retain, nonatomic) NSSet *excludedFrames;
@property (readonly) unsigned long long nodesInUniquingTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)_claimUnarchivingOfClass:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithTask:(unsigned int)a0 symbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a1 graph:(id)a2 debugTimer:(id)a3 collectDisklogs:(BOOL)a4;
- (id)vmuVMRegionForAddress:(unsigned long long)a0;
- (unsigned long long)stackIDForNode:(unsigned int)a0;
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
- (void)streamFullStackLogsToBlock:(id /* block */)a0;
- (BOOL)copyOriginalUniquingTable:(id)a0;
- (void)populateBacktraceUniquingTableWithStackLogs:(id)a0;
- (void)symbolicateBacktraceUniquingTable;
- (void)_setFunctionName:(id)a0 forPCAddressRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_setSourcePath:(id)a0 lineNumber:(unsigned int)a1 forPCAddressRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a2;
- (void)_parseSourceInfoString:(id)a0 intoComponents:(unsigned int *)a1;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })sourceLineRangeContainingPCaddress:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
