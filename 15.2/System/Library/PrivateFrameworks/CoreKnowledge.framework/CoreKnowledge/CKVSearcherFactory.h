@class NSObject;
@protocol OS_dispatch_queue, CKVSearchServiceProvider;

@interface CKVSearcherFactory : NSObject <CKVSearcherProvider> {
    NSObject<OS_dispatch_queue> *_searcherQueue;
    NSObject<CKVSearchServiceProvider> *_serviceProvider;
}

+ (id)sharedSearcherFactory;

- (id)initWithQueue:(id)a0 serviceProvider:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)makeSearcher;

@end
