@interface IDSCKFetchRecordZoneChangesOperation : IDSCKDatabaseOperation

@property (nonatomic) BOOL fetchAllChanges;
@property (copy, nonatomic) id /* block */ recordChangedBlock;
@property (copy, nonatomic) id /* block */ recordWithIDWasDeletedBlock;
@property (copy, nonatomic) id /* block */ recordZoneChangeTokensUpdatedBlock;
@property (copy, nonatomic) id /* block */ recordZoneFetchCompletionBlock;
@property (copy, nonatomic) id /* block */ fetchRecordZoneChangesCompletionBlock;

+ (Class)__class;
+ (id)alloc;

- (void).cxx_destruct;

@end
