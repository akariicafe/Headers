@class NSURL;

@interface PLJournalManagerCore : NSObject {
    NSURL *_baseURL;
    NSURL *_historyTokenURL;
}

+ (id)payloadClasses;
+ (void)validatePayloadClassesForManagedObjectModel:(id)a0;
+ (id)_nextValidPayloadWithObjectEnumerator:(id)a0 changedKeys:(id)a1;
+ (BOOL)createSnapshotWithJournal:(id)a0 usingManagedObjectContext:(id)a1 error:(id *)a2;
+ (BOOL)appendSnapshotWithJournal:(id)a0 usingManagedObjectContext:(id)a1 changedKeys:(id)a2 error:(id *)a3;
+ (id)_objectEnumeratorForJournal:(id)a0 usingManagedObjectContext:(id)a1 error:(id *)a2;

- (BOOL)saveHistoryToken:(id)a0 error:(id *)a1;
- (void)removeHistoryToken;
- (void).cxx_destruct;
- (id)init;
- (id)initWithBaseURL:(id)a0;

@end
