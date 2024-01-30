@class NSString;

@interface WebCoreAVFLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate> {
    struct WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> { void *m_ptr; } m_impl; } m_player;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPlayer:(void *)a0;
- (void).cxx_destruct;
- (BOOL)resourceLoader:(id)a0 shouldWaitForLoadingOfRequestedResource:(id)a1;
- (id).cxx_construct;
- (void)resourceLoader:(id)a0 didCancelLoadingRequest:(id)a1;
- (BOOL)resourceLoader:(id)a0 shouldWaitForResponseToAuthenticationChallenge:(id)a1;

@end
