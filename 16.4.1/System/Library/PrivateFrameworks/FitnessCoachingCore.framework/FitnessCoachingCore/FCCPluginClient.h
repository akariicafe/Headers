@class NSString, HKTaskServerProxyProvider, NSObject;
@protocol OS_dispatch_queue;

@interface FCCPluginClient : NSObject <_HKXPCExportable> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)remoteInterface;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)initWithHealthStore:(id)a0;
- (id)exportedInterface;
- (void)_pluginMessage:(unsigned long long)a0 data:(id)a1 completionHandler:(id /* block */)a2;
- (void)pluginMessage:(unsigned long long)a0 data:(id)a1 completionHandler:(id /* block */)a2;
- (void)_remoteProxy:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
