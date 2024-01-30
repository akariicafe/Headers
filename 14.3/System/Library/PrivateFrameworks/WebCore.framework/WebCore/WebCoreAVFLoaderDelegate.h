@class NSString;

@interface WebCoreAVFLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate> {
    struct WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *m_ptr; } m_impl; } m_player;
    struct GenericTaskQueue<WebCore::Timer> { struct WeakPtrFactory<WebCore::GenericTaskQueue<WebCore::Timer>, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *m_ptr; } m_impl; } m_weakPtrFactory; struct UniqueRef<WebCore::TaskDispatcher<WebCore::Timer> > { struct unique_ptr<WebCore::TaskDispatcher<WebCore::Timer>, std::__1::default_delete<WebCore::TaskDispatcher<WebCore::Timer> > > { struct __compressed_pair<WebCore::TaskDispatcher<WebCore::Timer> *, std::__1::default_delete<WebCore::TaskDispatcher<WebCore::Timer> > > { struct TaskDispatcher<WebCore::Timer> *__value_; } __ptr_; } m_ref; } m_dispatcher; unsigned int m_pendingTasks; BOOL m_isClosed; } m_taskQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPlayer:(struct WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *x0; } x0; } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)resourceLoader:(id)a0 shouldWaitForLoadingOfRequestedResource:(id)a1;
- (void)resourceLoader:(id)a0 didCancelLoadingRequest:(id)a1;
- (BOOL)resourceLoader:(id)a0 shouldWaitForResponseToAuthenticationChallenge:(id)a1;

@end
