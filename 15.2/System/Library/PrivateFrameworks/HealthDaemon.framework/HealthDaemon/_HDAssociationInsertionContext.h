@class NSUUID, HDProfile, HDDatabaseTransaction;

@interface _HDAssociationInsertionContext : NSObject {
    BOOL _enforceSameSource;
    BOOL _permitPendingAssociations;
    NSUUID *_parentUUID;
    HDProfile *_profile;
    HDDatabaseTransaction *_transaction;
}

- (void).cxx_destruct;

@end
