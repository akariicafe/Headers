@class CKVIndexManager, CKVSettings, NSObject;
@protocol OS_dispatch_queue;

@interface CKVServiceFactory : NSObject

@property (readonly, nonatomic) CKVIndexManager *indexManager;
@property (readonly, nonatomic) CKVSettings *settings;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;

- (void).cxx_destruct;
- (id)init;
- (id)initWithQueue:(id)a0 indexManager:(id)a1 settings:(id)a2;

@end
