@class CKContainer, CKDatabase;

@interface NSCloudKitMirroringDelegateSetupResult : NSCloudKitMirroringResult {
    CKContainer *_container;
    CKDatabase *_database;
}

- (id)initWithRequest:(id)a0 storeIdentifier:(id)a1 success:(BOOL)a2 error:(id)a3 container:(id)a4 database:(id)a5;
- (void)dealloc;

@end
