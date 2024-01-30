@class NSObject;
@protocol OS_dispatch_queue;

@interface ICStorageManager : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (readonly, nonatomic) unsigned long long storageSpaceAvailable;
@property (readonly, nonatomic) BOOL cachingEnabled;

+ (id)sharedManager;

- (void)ensureStorageIsAvailable:(unsigned long long)a0 withCompletionHandler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;

@end
