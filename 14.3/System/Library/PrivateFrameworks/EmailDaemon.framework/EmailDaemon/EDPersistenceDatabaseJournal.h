@class EDPersistenceDatabaseJournalManager, NSString;

@interface EDPersistenceDatabaseJournal : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _referenceCountLock;
    unsigned long long _referenceCount;
}

@property (readonly, nonatomic) EDPersistenceDatabaseJournalManager *journalManager;
@property (readonly) unsigned long long referenceCount;
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, nonatomic) unsigned long long number;

- (void)checkIn;
- (void).cxx_destruct;
- (id)description;
- (void)checkOut;
- (id)initWithJournalManager:(id)a0 number:(unsigned long long)a1;

@end
