@class PHMemory, PLPhotoAnalysisServiceClient, NSArray, NSSet, PHPhotoLibrary, NSObject;
@protocol OS_dispatch_queue;

@interface PXUpNextMemoriesGenerationRequest : NSObject

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PLPhotoAnalysisServiceClient *photoAnalysisServiceClient;
@property (readonly, nonatomic) PHMemory *rootMemory;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSArray *recentlyUsedFlexSongIDs;
@property (retain, nonatomic) NSArray *recentlyUsedAppleMusicSongIDs;
@property (readonly, nonatomic) NSSet *memoryLocalIdentifiersToAvoid;
@property (readonly, nonatomic) unsigned long long targetUpNextMemoryCount;
@property (nonatomic) BOOL wantsVerboseDebugInfo;

- (id)init;
- (void).cxx_destruct;
- (id)_fetchEphemeralMemoriesWithLocalIdentifiers:(id)a0;
- (id)_fetchOverrideMemories;
- (id)fetchUpNextMemoriesWithError:(id *)a0;
- (id)fetchUpNextMemoriesWithError:(id *)a0 sharingFilter:(unsigned short)a1;
- (id)initWithRootMemory:(id)a0 avoidMemoriesWithLocalIdentifiers:(id)a1 targetUpNextMemoryCount:(unsigned long long)a2 musicCurationParameters:(id)a3;
- (void)startGenerationWithCompletionHandler:(id /* block */)a0;

@end
