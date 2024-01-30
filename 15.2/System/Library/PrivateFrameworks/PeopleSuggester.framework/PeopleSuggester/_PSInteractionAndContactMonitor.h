@class NSSet, _CDInteractionStore, CNContactStore;

@interface _PSInteractionAndContactMonitor : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) NSSet *contactIdsSeen;
@property (copy, nonatomic) NSSet *contactIdsInContactStore;
@property (readonly, nonatomic) _CDInteractionStore *interactionStore;
@property (readonly, nonatomic) CNContactStore *contactStore;

- (id)initWithInteractionStore:(id)a0 contactStore:(id)a1;
- (void)notifyWhenContactStoreChanged;
- (void).cxx_destruct;
- (void)notifyWhenContactAddedToInteractionStore:(id)a0;
- (void)fetchAllContactIdsFromContactStore;
- (void)populateContactIdCachesWithMessageCache:(id)a0 shareCache:(id)a1;

@end
