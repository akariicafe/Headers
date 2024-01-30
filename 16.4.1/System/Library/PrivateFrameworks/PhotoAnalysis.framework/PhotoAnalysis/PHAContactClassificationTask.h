@class NSString;

@interface PHAContactClassificationTask : NSObject <PHATask>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldRunWithGraphManager:(id)a0;
- (BOOL)currentPlatformIsSupported;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (id)_faceIDModelPersistentStorageDirectoryURLWithPhotoLibrary:(id)a0;
- (id)_loadPersonsModelWithPhotoLibrary:(id)a0;
- (BOOL)classifyContactsWithPhotoLibrary:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (BOOL)shouldProcessContact:(id)a0;
- (id)sortedPoolOfContactIdentifiersExcludingContactIdentifiers:(id)a0 progress:(id)a1;

@end
