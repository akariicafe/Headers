@class NSArray, NSSet, NSDictionary;

@interface IOAccelMemoryInfo : NSObject {
    NSDictionary *dict;
    id _expansionData;
}

@property (readonly) unsigned long long memoryPool;
@property (readonly) unsigned long long length;
@property (readonly) unsigned long long residentLength;
@property (readonly) unsigned long long dirtyLength;
@property (readonly) BOOL wired;
@property (readonly) BOOL cachedCopy;
@property (readonly) BOOL cacheDirty;
@property (readonly) BOOL purgeable;
@property (readonly) BOOL orphaned;
@property (readonly) NSArray *devices;
@property (readonly) unsigned int surfaceID;
@property (readonly) NSSet *processIDs;
@property (readonly) NSSet *blamedProcesses;
@property (readonly) NSArray *mappings;
@property (readonly) NSArray *openglObjects;
@property (readonly) NSArray *openclObjects;
@property (readonly) NSArray *formattedDescriptions;

+ (void)collectDataWithCompletionQueue:(id)a0 completionBlock:(id /* block */)a1;
+ (void)newKernelAllocationTotals:(id)a0 totalsReturn:(id)a1 errorReturn:(id)a2;
+ (void)validateDictionary:(id)a0;
+ (void)collectAllocationTotalsWithOptions:(id)a0 queue:(id)a1 completionBlock:(id /* block */)a2;
+ (id)newKernelAllocationList:(id)a0;
+ (void)purgeAllVidMem;

- (void)dealloc;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)blamedProcessesForProcess:(int)a0;

@end
