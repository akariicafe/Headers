@class CRTombstoneOrderedSet, NSString, NSUUID, CRDocument, NSMutableOrderedSet, REMObjectID, NSObject;
@protocol REMCRReminderIDListDelegate;

@interface REMCRReminderIDList : NSObject <CRUndoDelegate, REMObjectIDProviding> {
    CRTombstoneOrderedSet *_reminderIDsStorage;
}

@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (readonly, nonatomic) NSUUID *replica;
@property (retain, nonatomic) CRDocument *document;
@property (retain, nonatomic) REMObjectID *remObjectID;
@property (weak, nonatomic) NSObject<REMCRReminderIDListDelegate> *delegate;
@property (readonly, nonatomic) NSMutableOrderedSet *reminderIDsProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectIDWithUUID:(id)a0;
+ (id)newObjectID;
+ (id)listFromSerializedData:(id)a0 replica:(id)a1;

- (id)_orderedSet;
- (void)mergeWith:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addReminder:(id)a0;
- (id)copyForReplica:(id)a0;
- (void)addUndoCommandsForObject:(id)a0 block:(id /* block */)a1;
- (BOOL)wantsUndoCommands;
- (id)initWithDocument:(id)a0 objectID:(id)a1;
- (unsigned long long)countOfReminderIDs;
- (id)objectInReminderIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)indexInReminderIDsOfObject:(id)a0;
- (void)insertObject:(id)a0 inReminderIDsAtIndex:(unsigned long long)a1;
- (void)removeObjectFromReminderIDsAtIndex:(unsigned long long)a0;

@end
