@class NSString, PHPhotoLibrary, NSObject;
@protocol OS_os_log;

@interface PGMemoryPlannerPhotoKitSource : NSObject <PGMemoryPlannerPastSource> {
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_os_log> *_loggingConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)translateLegacyMemoryCategory:(unsigned long long)a0 subcategory:(unsigned long long)a1 toNewMemoryCategory:(unsigned long long *)a2 triggerType:(unsigned long long *)a3;

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0 loggingConnection:(id)a1;
- (id)memoriesToAvoidForConfiguration:(id)a0 withGraph:(id)a1 progressReporter:(id)a2;
- (id)pastMemoriesForConfiguration:(id)a0 withGraph:(id)a1 progressReporter:(id)a2;
- (id)triggeredMemoriesFromPersistedMemories:(id)a0 withGraph:(id)a1 progressReporter:(id)a2;

@end
