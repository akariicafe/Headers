@class NSString;
@protocol FCCKDatabaseMigrator;

@interface FCCKDatabaseEncryptionStartUpMiddleware : NSObject <FCCKDatabaseStartUpMiddleware> {
    id<FCCKDatabaseMigrator> _encryptionMigrator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performStartUpForDatabase:(id)a0 completion:(id /* block */)a1;

@end
