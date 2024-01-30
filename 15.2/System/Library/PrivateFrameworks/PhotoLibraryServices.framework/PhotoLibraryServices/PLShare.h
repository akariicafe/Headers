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
+ (id)insertOrUpdateShareWithCPLScopeChange:(id)a0 inPhotoLibrary:(id)a1;
+ (id)createOwnedShareWithUUID:(id)a0 creationDate:(id)a1 title:(id)a2 inPhotoLibrary:(id)a3;
+ (long long)cloudDeletionTypeForTombstone:(id)a0;
+ (void)deleteAllSharesInManagedObjectContext:(id)a0;
+ (id)shareWithScopeIdentifier:(id)a0 includeTrashed:(BOOL)a1 inManagedObjectContext:(id)a2;
+ (id)shareWithShareURL:(id)a0 includeTrashed:(BOOL)a1 inManagedObjectContext:(id)a2;
+ (id)shareWithUUID:(id)a0 includeTrashed:(BOOL)a1 inManagedObjectContext:(id)a2;
+ (id)scopeIdentifierPrefix;
+ (id)predicateToExcludeExpiredShares;
+ (id)predicateToExcludeTrashedShares;
+ (long long)_cloudDeletionTypeForScopeType:(long long)a0;
+ (void)_abortIfCalledOnBaseClass;
+ (id)_registeredSubclasses;
+ (id)shareWithScopedIdentifier:(id)a0 includeTrashed:(BOOL)a1 inManagedObjectContext:(id)a2;
+ (id)sharesWithPredicate:(id)a0 fetchLimit:(unsigned long long)a1 inManagedObjectContext:(id)a2;
+ (id)_basePredicateIncludeTrashedShares:(BOOL)a0;
+ (void)deleteExpiredSharesInManagedObjectContext:(id)a0;
+ (long long)_cloudDeletionTypeForStatus:(short)a0;
+ (void)fetchShareFromShareURL:(id)a0 inPhotoLibrary:(id)a1 completionHandler:(id /* block */)a2;
+ (BOOL)supportsCPLScopeType:(long long)a0;
+ (id)insertInPhotoLibrary:(id)a0;

- (void)prepareForDeletion;
- (void)trash;
- (id)_statusDescription;
- (id)compactDescription;
- (id)owner;
- (id)cplScopeChange;
- (void)autoAcceptShareIfNecessary;
- (void)updateShareWithCPLShare:(id)a0 inPhotoLibrary:(id)a1;
- (void)_updateShareStatusWithCurrentUser:(id)a0;
- (void)acceptWithCompletionHandler:(id /* block */)a0;
- (void)publishWithCompletionHandler:(id /* block */)a0;

@end
