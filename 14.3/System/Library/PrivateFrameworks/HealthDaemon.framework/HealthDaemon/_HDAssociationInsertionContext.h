@class NSUUID, HDProfile, HDDatabaseTransaction;

@interface _HDAssociationInsertionContext : NSObject

@property (readonly, copy, nonatomic) NSUUID *parentUUID;
@property (readonly, nonatomic) BOOL enforceSameSource;
@property (readonly, nonatomic) BOOL permitPendingAssociations;
@property (readonly, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) HDDatabaseTransaction *transaction;

- (void).cxx_destruct;
- (id)initWithParentUUID:(id)a0 enforceSameSource:(BOOL)a1 permitPendingAssociations:(BOOL)a2 profile:(id)a3 transaction:(id)a4;

@end
