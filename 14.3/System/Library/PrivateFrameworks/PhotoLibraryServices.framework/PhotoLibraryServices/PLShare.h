@class NSString, NSSet, NSURL, NSDate;

@interface PLShare : PLManagedObject <PLCloudDeletable>

@property (class, readonly, copy) NSString *cloudUUIDKeyForDeletion;

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *scopeIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSURL *shareURL;
@property (copy, nonatomic) NSDate *expiryDate;
@property (nonatomic) short status;
@property (nonatomic) long long scopeType;
@property (nonatomic) long long publicPermission;
@property (nonatomic) short localPublishState;
@property (nonatomic) short trashedState;
@property (nonatomic) short cloudDeleteState;
@property (retain, nonatomic) NSSet *participants;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (id)insertInPhotoLibrary:(id)a0;
+ (id)predicateToExcludeExpiredShares;
+ (id)predicateToExcludeTrashedShares;
+ (long long)cloudDeletionTypeForTombstone:(id)a0;
+ (void)deleteAllSharesInManagedObjectContext:(id)a0;
+ (id)shareWithScopeIdentifier:(id)a0 includeTrashed:(BOOL)a1 inManagedObjectContext:(id)a2;
+ (id)shareWithUUID:(id)a0 includeTrashed:(BOOL)a1 inManagedObjectContext:(id)a2;
+ (id)shareWithShareURL:(id)a0 includeTrashed:(BOOL)a1 inManagedObjectContext:(id)a2;
+ (void)fetchShareFromShareURL:(id)a0 inPhotoLibrary:(id)a1 completionHandler:(id /* block */)a2;
+ (id)_registeredSubclasses;
+ (id)scopeIdentifierPrefix;
+ (id)_basePredicateIncludeTrashedShares:(BOOL)a0;
+ (id)shareWithScopedIdentifier:(id)a0 includeTrashed:(BOOL)a1 inManagedObjectContext:(id)a2;
+ (id)sharesWithPredicate:(id)a0 fetchLimit:(unsigned long long)a1 inManagedObjectContext:(id)a2;
+ (void)deleteExpiredSharesInManagedObjectContext:(id)a0;
+ (BOOL)supportsCPLScopeType:(long long)a0;
+ (void)createOrUpdateShareWithScopeChange:(id)a0 photoLibrary:(id)a1 completionHandler:(id /* block */)a2;

- (void)trash;
- (id)owner;
- (id)cplScopeChange;
- (void)acceptWithCompletionHandler:(id /* block */)a0;
- (void)publishWithCompletionHandler:(id /* block */)a0;
- (id)_statusDescription;
- (void)updateWithScopeChange:(id)a0;

@end
