@class ASDServiceBroker, ASDDispatchQueue, NSMutableDictionary;

@interface ASDAppQueryExecutor : NSObject {
    ASDDispatchQueue *_dispatchQueue;
    NSMutableDictionary *_queryPromises;
    ASDServiceBroker *_serviceBroker;
}

+ (void)_executeQueryWithPredicate:(id)a0 onPairedDevice:(id)a1 usingServiceBroker:(id)a2 withResultHandler:(id /* block */)a3;

- (id)init;
- (void).cxx_destruct;
- (id)initWithServiceBroker:(id)a0;
- (void)executeQueryWithPredicate:(id)a0 onPairedDevice:(id)a1 withResultHandler:(id /* block */)a2;

@end
