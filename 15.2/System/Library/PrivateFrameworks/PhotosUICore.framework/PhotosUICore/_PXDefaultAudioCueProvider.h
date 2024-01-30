@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _PXDefaultAudioCueProvider : NSObject <PXAudioCueProvider> {
    NSMutableDictionary *_providersByCatalog;
    NSObject<OS_dispatch_queue> *_stateQueue;
}

- (void).cxx_destruct;
- (id)init;
- (id)requestCuesForAudioAsset:(id)a0 resultHandler:(id /* block */)a1;
- (id)_cueProviderForCatalog:(long long)a0;

@end
