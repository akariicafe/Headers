@class CNContactStore, NSSet, _CDInteractionStore, NSString, NSData, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface _PSInteractionAndContactMonitor : NSObject <CNChangeHistoryEventVisitor> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSData *_changeHistoryToken;
    NSMutableSet *_historyChangesQueuedToAdd;
    NSMutableSet *_historyChangesQueuedToDelete;
    id /* block */ _processContactChanges;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

@property (copy, nonatomic) NSSet *contactIdsSeen;
@property (copy, nonatomic) NSSet *contactIdsInContactStore;
@property (readonly, nonatomic) _CDInteractionStore *interactionStore;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)visitUpdateContactEvent:(id)a0;
- (void)fetchChangedContactIdsFromContactStore;
- (void)populateContactIdCachesWithMessageCache:(id)a0 shareCache:(id)a1;
- (void)visitDeleteContactEvent:(id)a0;
- (void)notifyWhenContactAddedToInteractionStore:(id)a0;
- (void)visitAddContactEvent:(id)a0;
- (id)initWithInteractionStore:(id)a0 contactStore:(id)a1;
- (void)visitDropEverythingEvent:(id)a0;
- (void)fetchAllContactIdsFromContactStore;
- (void).cxx_destruct;
- (void)notifyWhenContactStoreChanged;

@end
