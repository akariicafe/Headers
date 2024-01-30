@class HDProfile, NSObject;
@protocol OS_dispatch_queue;

@interface HDConceptIndexer : NSObject {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (BOOL)insertConceptIndexEntries:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)sampleQueryDescriptionsFollowingAnchor:(id)a0 futureMigrationEnabled:(BOOL)a1;
+ (id)indexSample:(id)a0 profile:(id)a1 error:(id *)a2;

- (id)initWithProfile:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)processSamplesWithLimit:(unsigned long long)a0 countOfSamplesProcessed:(long long *)a1 error:(id *)a2;
- (BOOL)resetWithError:(id *)a0;
- (BOOL)_syncQueue_processDeletedSamplesWithLimit:(long long)a0 sampleType:(id)a1 countOfSamplesProcessed:(long long *)a2 error:(id *)a3;
- (BOOL)_syncQueue_resetWithError:(id *)a0;
- (BOOL)_syncQueue_processUpdatedSamplesWithLimit:(long long)a0 countOfSamplesProcessed:(long long *)a1 error:(id *)a2;
- (BOOL)_syncQueue_processSamplesWithLimit:(long long)a0 countOfSamplesProcessed:(long long *)a1 error:(id *)a2;

@end
