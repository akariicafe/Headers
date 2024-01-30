@class NSCountedSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CoreMLModelSecurityServiceToClient : NSObject <CoreMLModelSecurityServiceToClientProtocol>

@property (retain, nonatomic) NSMutableDictionary *featureProviderMap;
@property (retain, nonatomic) NSCountedSet *featureProviderCount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serviceToClientQueue;

- (id)init;
- (void).cxx_destruct;
- (void)clientFeatureNames:(id)a0 withReply:(id /* block */)a1;
- (void)clientFeatureValueForName:(id)a0 uniqueKeyForProvider:(id)a1 withReply:(id /* block */)a2;

@end
