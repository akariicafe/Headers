@class NSString, NSProgress, PXAudioSession, NSObject;
@protocol OS_dispatch_queue, PXStorySongResource;

@interface PXStorySongResourcePreloadingOperation : PXAsyncOperation <PXChangeObserver, NSProgressReporting>

@property (retain, nonatomic) PXAudioSession *session;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<PXStorySongResource> resource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSProgress *progress;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSongResource:(id)a0;
- (void)px_start;

@end
