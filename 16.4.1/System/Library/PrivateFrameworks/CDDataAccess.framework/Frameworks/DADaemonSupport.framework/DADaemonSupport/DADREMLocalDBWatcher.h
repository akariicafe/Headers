@class NSMapTable;

@interface DADREMLocalDBWatcher : NSObject {
    NSMapTable *_concernedRemindersPartyToBlockMap;
}

+ (id)sharedDBWatcher;

- (void)remindersDatabaseDidChange;
- (void)registerConcernedRemindersParty:(id)a0 withChangedBlock:(id /* block */)a1;
- (id)init;
- (void)removeConcernedRemindersParty:(id)a0;
- (void).cxx_destruct;

@end
