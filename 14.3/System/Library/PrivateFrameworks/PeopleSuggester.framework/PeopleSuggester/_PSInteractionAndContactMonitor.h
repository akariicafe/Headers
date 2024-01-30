@class CNContactStore, NSSet, _CDInteractionStore, NSMutableSet;

@interface _PSInteractionAndContactMonitor : NSObject

@property (retain) NSMutableSet *mutableContactIdsSeen;
@property (retain) NSMutableSet *mutableContactIdsInContactStore;
@property (readonly, copy, nonatomic) NSSet *contactIdsSeen;
@property (readonly, copy, nonatomic) NSSet *contactIdsInContactStore;
@property (readonly, nonatomic) _CDInteractionStore *interactionStore;
@property (readonly, nonatomic) CNContactStore *contactStore;

- (void).cxx_destruct;
- (void)fetchAllContactIdsFromContactStore;
- (void)populateContactIdCachesWithMessageCache:(id)a0 shareCache:(id)a1;
- (void)notifyWhenContactStoreChanged;
- (id)initWithInteractionStore:(id)a0 contactStore:(id)a1;
- (void)notifyWhenContactAddedToInteractionStore:(id)a0;

@end
