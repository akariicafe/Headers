@class NSSet;

@interface WFCoreDataChangeNotification : NSObject

@property (readonly, nonatomic) BOOL invalidatedAllObjects;
@property (readonly, nonatomic) NSSet *updated;
@property (readonly, nonatomic) NSSet *inserted;
@property (readonly, nonatomic) NSSet *deleted;
@property (readonly, nonatomic) int processIdentifier;

- (BOOL)appliesToObjectURIRepresentations:(id)a0;
- (id)initWithInvalidatedAllObjects:(BOOL)a0 updated:(id)a1 inserted:(id)a2 deleted:(id)a3 processIdentifier:(int)a4;
- (id)insertedDescriptors;
- (id)initWithDictionaryRepresentation:(id)a0;
- (BOOL)hasChanges;
- (id)notificationByMergingChangesFromNotification:(id)a0;
- (BOOL)appliesToObjectIDs:(id)a0;
- (id)updatedDescriptors;
- (void).cxx_destruct;
- (BOOL)appliesToResultState:(id)a0;
- (BOOL)originatedInCurrentProcess;
- (id)deletedDescriptors;
- (id)debugDescription;
- (id)dictionaryRepresentation;

@end
