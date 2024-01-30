@class NSMapTable;

@interface DADREMLocalDBWatcher : NSObject {
    NSMapTable *_concernedRemindersPartyToBlockMap;
}

+ (id)sharedDBWatcher;

- (id)init;
- (void)remindersDatabaseDidChange;
- (void).cxx_destruct;
- (void)removeConcernedRemindersParty:(id)a0;
- (void)registerConcernedRemindersParty:(id)a0 withChangedBlock:(id /* block */)a1;

@end
