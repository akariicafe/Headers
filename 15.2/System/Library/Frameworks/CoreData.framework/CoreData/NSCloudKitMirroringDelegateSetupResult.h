@class CKContainer, CKDatabase;

@interface NSCloudKitMirroringDelegateSetupResult : NSCloudKitMirroringResult {
    CKContainer *_container;
    CKDatabase *_database;
}

- (id)initWithRequest:(id)a0 success:(BOOL)a1 error:(id)a2 container:(id)a3 database:(id)a4;
- (void)dealloc;

@end
