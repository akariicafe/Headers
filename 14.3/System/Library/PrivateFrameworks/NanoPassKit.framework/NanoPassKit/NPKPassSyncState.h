@class NSData, NSMutableDictionary;

@interface NPKPassSyncState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *syncStateItems;
@property (readonly, nonatomic) NSData *syncStateHash;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithPasses:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtoSyncState:(id)a0;
- (id)protoSyncState;
- (BOOL)diffWithBaselineState:(id)a0 representsMaterialDifferenceFromState:(id)a1;
- (id)passSyncStateByApplyingChange:(id)a0;
- (id)passSyncStateByAddingOrUpdatingSyncStateItem:(id)a0;
- (id)passSyncStateByRemovingPassWithUniqueID:(id)a0;
- (id)commonBaselinePassSyncStateWithState:(id)a0;
- (BOOL)stateIsSubsetOfUnionOfPassSyncStates:(id)a0;
- (void)compareWithBaselinePassSyncState:(id)a0 outAddedPassUniqueIDs:(id *)a1 outUpdatedPassUniqueIDs:(id *)a2 outRemovedPassUniqueIDs:(id *)a3;
- (id)initWithSyncStateItems:(id)a0;
- (BOOL)isEqualToPassSyncState:(id)a0;
- (BOOL)stateContainsSyncStateItem:(id)a0;

@end
