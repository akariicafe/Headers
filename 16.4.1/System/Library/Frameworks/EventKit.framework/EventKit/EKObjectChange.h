@class EKObjectID;

@interface EKObjectChange : NSObject

@property (readonly, nonatomic) long long changeID;
@property (readonly, nonatomic) long long sequenceNumber;
@property (readonly, nonatomic) EKObjectID *changedObjectID;
@property (readonly, nonatomic) int changeType;

+ (int)entityType;
+ (long long)objectType;
+ (void)objectChangesInStore:(id)a0 resultHandler:(id /* block */)a1;
+ (id)CADObjectChangeIDsFromEKObjectChanges:(id)a0;
+ (void)callClientResultsHandler:(id /* block */)a0 changesTruncated:(BOOL)a1 latestToken:(long long)a2 changes:(id)a3;
+ (void)fetchChangesToObjectsOfTypes:(id)a0 inCalendar:(id)a1 resultHandler:(id /* block */)a2;
+ (void)fetchChangesToObjectsOfTypes:(id)a0 inSource:(id)a1 resultHandler:(id /* block */)a2;
+ (void)fetchChangesToObjectsOfTypes:(id)a0 inStore:(id)a1 resultHandler:(id /* block */)a2;
+ (void)fetchObjectChangesInCalendar:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchObjectChangesInSource:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchObjectChangesInStore:(id)a0 resultHandler:(id /* block */)a1;
+ (id)objectChangeWithProperties:(id)a0;
+ (void)objectChangesInCalendar:(id)a0 resultHandler:(id /* block */)a1;
+ (void)objectChangesInSource:(id)a0 resultHandler:(id /* block */)a1;
+ (void)objectChangesOfType:(id)a0 inCalendar:(id)a1 resultHandler:(id /* block */)a2;
+ (void)objectChangesOfType:(id)a0 inSource:(id)a1 resultHandler:(id /* block */)a2;
+ (void)objectChangesOfType:(id)a0 inStore:(id)a1 resultHandler:(id /* block */)a2;
+ (id /* block */)processFetchResults:(id /* block */)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithChangeProperties:(id)a0;
- (id)serializedPropertiesForConsumingChange;

@end
