@class NSString, PXFlexMusicLibrary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PXFlexMusicCueProvider : NSObject <PXChangeObserver, PXAudioCueProvider> {
    NSObject<OS_dispatch_queue> *_queue;
    PXFlexMusicLibrary *_library;
    NSMutableArray *_requests;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (id)requestCuesForAudioAsset:(id)a0 resultHandler:(id /* block */)a1;
- (void)_fetchCuesForAudioAsset:(id)a0 resultHandler:(id /* block */)a1;
- (void)_deliverCuesIfNeeded;

@end
