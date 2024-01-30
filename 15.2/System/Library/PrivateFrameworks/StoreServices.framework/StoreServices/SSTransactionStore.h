@class NSCountedSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SSTransactionStore : NSObject {
    NSCountedSet *_transactionCount;
    NSMutableDictionary *_transactionStore;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)defaultStore;

- (void).cxx_destruct;
- (id)init;
- (void)releaseKeepAliveWithTransactionID:(id)a0;
- (void)takeKeepAliveWithTransactionID:(id)a0;

@end
