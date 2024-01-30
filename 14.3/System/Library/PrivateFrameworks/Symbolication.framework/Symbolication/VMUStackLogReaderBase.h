@class NSSet, NSString, NSMapTable, VMUVMRegionTracker, NSMutableDictionary;

@interface VMUStackLogReaderBase : NSObject <VMUStackLogReader> {
    NSMapTable *_addressToSymbolicationMap;
    NSMutableDictionary *_binaryImagePathToIdentifierMap;
}

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

- (void).cxx_destruct;
- (id)vmuVMRegionForAddress:(unsigned long long)a0;
- (long long)getFramesForStackID:(unsigned long long)a0 stackFramesBuffer:(unsigned long long *)a1;
- (long long)getFramesForNode:(unsigned int)a0 inLiteZone:(BOOL)a1 stackFramesBuffer:(unsigned long long *)a2;
- (id)symbolicatedBacktraceForFrames:(unsigned long long *)a0 frameCount:(long long)a1 options:(unsigned long long)a2;
- (id)binaryImagePathForPCaddress:(unsigned long long)a0;
- (id)identifierForBinaryImagePath:(id)a0;
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
- (id)symbolicatedBacktraceForNode:(unsigned int)a0 nodeDetails:(struct { unsigned long long x0; unsigned long x1 : 60; unsigned char x2 : 4; id x3; })a1 isLiteZone:(BOOL)a2 options:(unsigned long long)a3;
- (id)symbolicatedBacktraceForStackID:(unsigned long long)a0 options:(unsigned long long)a1;

@end
