@class NSString, TRISQLiteCKDatabase, CKDatabase;

@interface TRISQLiteCKContainer : NSObject {
    TRISQLiteCKDatabase *_database;
}

@property (readonly, nonatomic) CKDatabase *privateCloudDatabase;
@property (readonly, nonatomic) CKDatabase *publicCloudDatabase;
@property (readonly, nonatomic) CKDatabase *sharedCloudDatabase;
@property (readonly, copy, nonatomic) NSString *containerIdentifier;

- (void).cxx_destruct;
- (id)initWithContainerIdentifier:(id)a0 database:(id)a1;

@end
