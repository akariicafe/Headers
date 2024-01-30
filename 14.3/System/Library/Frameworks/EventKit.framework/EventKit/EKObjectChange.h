@class EKObjectID;

@interface EKObjectChange : NSObject

@property (readonly, nonatomic) long long changeID;
@property (readonly, nonatomic) long long sequenceNumber;
@property (readonly, nonatomic) EKObjectID *changedObjectID;
@property (readonly, nonatomic) int changeType;

+ (int)entityType;
+ (id /* block */)processFetchResults:(id /* block */)a0;
+ (id)objectChangeWithProperties:(id)a0;
+ (id)CADObjectChangeIDsFromEKObjectChanges:(id)a0;
+ (void)fetchObjectChangesInStore:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchObjectChangesInSource:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchObjectChangesInCalendar:(id)a0 resultHandler:(id /* block */)a1;
+ (void)callClientResultsHandler:(id /* block */)a0 changesTruncated:(BOOL)a1 latestToken:(long long)a2 changes:(id)a3;
+ (long long)objectType;
+ (void)fetchChangesToObjectsOfTypes:(id)a0 inStore:(id)a1 resultHandler:(id /* block */)a2;
+ (void)fetchChangesToObjectsOfTypes:(id)a0 inSource:(id)a1 resultHandler:(id /* block */)a2;
+ (void)fetchChangesToObjectsOfTypes:(id)a0 inCalendar:(id)a1 resultHandler:(id /* block */)a2;
+ (id /* block */)_filterObjectChangesNotConformingToOwnerIDProvidingProtocol:(id /* block */)a0;
+ (void)fetchChangesToOwnerIDProvidingObjectsOfTypes:(id)a0 inStore:(id)a1 resultHandler:(id /* block */)a2;
+ (void)fetchChangesToOwnerIDProvidingObjectsOfTypes:(id)a0 inSource:(id)a1 resultHandler:(id /* block */)a2;
+ (void)fetchChangesToOwnerIDProvidingObjectsOfTypes:(id)a0 inCalendar:(id)a1 resultHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)serializedPropertiesForConsumingChange;
- (BOOL)isEqual:(id)a0;
- (id)initWithChangeProperties:(id)a0;

@end
