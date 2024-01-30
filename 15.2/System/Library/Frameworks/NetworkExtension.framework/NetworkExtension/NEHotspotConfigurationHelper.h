@class NEHelper, NSObject;
@protocol OS_dispatch_queue;

@interface NEHotspotConfigurationHelper : NSObject {
    NEHelper *_helper;
}

@property (readonly) NEHelper *helper;
@property (readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (id)createXPCRequest:(id)a0 requestType:(long long)a1;
- (id)processQueryNetworksResponse:(id)a0;
- (void)sendRequest:(id)a0 requestType:(long long)a1 resultHandler:(id /* block */)a2;

@end
