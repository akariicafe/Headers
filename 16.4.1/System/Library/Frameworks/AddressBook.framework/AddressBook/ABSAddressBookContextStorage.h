@class NSArray, NSMutableDictionary, NSMutableArray;

@interface ABSAddressBookContextStorage : NSObject

@property (readonly, nonatomic) NSMutableDictionary *deletedMemberships;
@property (readonly, nonatomic) NSMutableDictionary *addedMemberships;
@property (readonly, nonatomic) NSMutableDictionary *revertedRecords;
@property (nonatomic) BOOL hasUnsavedChanges;
@property (readonly, nonatomic) NSMutableDictionary *records;
@property (readonly, nonatomic) NSMutableDictionary *deletedRecords;
@property (readonly, nonatomic) NSMutableArray *insertedRecords;
@property (readonly, nonatomic) NSMutableDictionary *updatedRecords;
@property (readonly, nonatomic) NSArray *recordsWithPendingMembershipAdditions;
@property (readonly, nonatomic) NSArray *recordsWithPendingMembershipDeletions;

- (BOOL)addRecord:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)revert;
- (void)_resetIncludingLivingRecords:(BOOL)a0;
- (BOOL)addMemberRecord:(id)a0 toRecord:(id)a1;
- (id)addedMembersForRecord:(id)a0;
- (id)cnImplFetched:(id)a0 creationBlock:(id /* block */)a1;
- (void)commitPendingChanges;
- (BOOL)deleteRecord:(id)a0;
- (id)recordFetched:(id)a0;
- (BOOL)recordUpdated:(id)a0;
- (BOOL)removeMemberRecord:(id)a0 fromRecord:(id)a1;
- (id)removedMembersForRecord:(id)a0;

@end
