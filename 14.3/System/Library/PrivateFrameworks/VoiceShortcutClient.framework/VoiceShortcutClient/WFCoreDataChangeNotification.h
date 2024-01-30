@class NSSet;

@interface WFCoreDataChangeNotification : NSObject

@property (readonly, nonatomic) BOOL invalidatedAllObjects;
@property (readonly, nonatomic) NSSet *updated;
@property (readonly, nonatomic) NSSet *inserted;
@property (readonly, nonatomic) NSSet *deleted;
@property (readonly, nonatomic) int processIdentifier;

- (void).cxx_destruct;
- (BOOL)appliesToResultState:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (BOOL)appliesToObjectIDs:(id)a0;
- (id)initWithInvalidatedAllObjects:(BOOL)a0 updated:(id)a1 inserted:(id)a2 deleted:(id)a3 processIdentifier:(int)a4;
- (id)deletedDescriptors;
- (id)notificationByMergingChangesFromNotification:(id)a0;
- (BOOL)appliesToObjectURIRepresentations:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)hasChanges;
- (id)updatedDescriptors;
- (id)insertedDescriptors;
- (id)debugDescription;
- (BOOL)originatedInCurrentProcess;

@end
