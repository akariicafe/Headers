@class NSURL;

@interface PLJournalManagerCore : NSObject {
    NSURL *_baseURL;
    NSURL *_historyTokenURL;
}

+ (id)payloadClasses;
+ (void)validatePayloadClassesForManagedObjectModel:(id)a0;
+ (BOOL)createSnapshotWithJournal:(id)a0 usingManagedObjectContext:(id)a1 error:(id *)a2;
+ (BOOL)appendSnapshotWithJournal:(id)a0 usingManagedObjectContext:(id)a1 changedKeys:(id)a2 error:(id *)a3;
+ (id)_objectEnumeratorForJournal:(id)a0 usingManagedObjectContext:(id)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (BOOL)saveHistoryToken:(id)a0 error:(id *)a1;
- (id)initWithBaseURL:(id)a0;

@end
