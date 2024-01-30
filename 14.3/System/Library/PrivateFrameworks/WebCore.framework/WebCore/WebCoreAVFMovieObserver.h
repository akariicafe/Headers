@class NSString;

@interface WebCoreAVFMovieObserver : NSObject <AVPlayerItemLegibleOutputPushDelegate, AVPlayerItemMetadataOutputPushDelegate, AVPlayerItemMetadataCollectorPushDelegate> {
    struct WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *m_ptr; } m_impl; } m_player;
    struct GenericTaskQueue<WebCore::Timer> { struct WeakPtrFactory<WebCore::GenericTaskQueue<WebCore::Timer>, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *m_ptr; } m_impl; } m_weakPtrFactory; struct UniqueRef<WebCore::TaskDispatcher<WebCore::Timer> > { struct unique_ptr<WebCore::TaskDispatcher<WebCore::Timer>, std::__1::default_delete<WebCore::TaskDispatcher<WebCore::Timer> > > { struct __compressed_pair<WebCore::TaskDispatcher<WebCore::Timer> *, std::__1::default_delete<WebCore::TaskDispatcher<WebCore::Timer> > > { struct TaskDispatcher<WebCore::Timer> *__value_; } __ptr_; } m_ref; } m_dispatcher; unsigned int m_pendingTasks; BOOL m_isClosed; } m_taskQueue;
    int m_delayCallbacks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)disconnect;
- (id)initWithPlayer:(struct WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *x0; } x0; } *)a0;
- (void)didEnd:(id)a0;
- (void).cxx_destruct;
- (void)metadataLoaded;
- (void)metadataCollector:(id)a0 didCollectDateRangeMetadataGroups:(id)a1 indexesOfNewGroups:(id)a2 indexesOfModifiedGroups:(id)a3;
- (void)metadataOutput:(id)a0 didOutputTimedMetadataGroups:(id)a1 fromPlayerItemTrack:(id)a2;
- (id).cxx_construct;
- (void)outputSequenceWasFlushed:(id)a0;
- (void)legibleOutput:(id)a0 didOutputAttributedStrings:(id)a1 nativeSampleBuffers:(id)a2 forItemTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(int)a3;

@end
