@class NSArray, CKDatabase;

@interface FCCKPrivateDatabaseCKProperties : NSObject {
    CKDatabase *_database;
    CKDatabase *_databaseWithZoneWidePCS;
    CKDatabase *_secureDatabase;
    NSArray *_containers;
}

- (void).cxx_destruct;

@end
