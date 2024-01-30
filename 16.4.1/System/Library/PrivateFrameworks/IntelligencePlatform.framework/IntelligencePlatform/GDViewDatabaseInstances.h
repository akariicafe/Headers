@class NSURL, _PASLock;

@interface GDViewDatabaseInstances : NSObject {
    NSURL *_baseURL;
    _PASLock *_lock;
}

- (id)init;
- (void).cxx_destruct;
- (id)databaseForURL:(id)a0 error:(id *)a1;

@end
