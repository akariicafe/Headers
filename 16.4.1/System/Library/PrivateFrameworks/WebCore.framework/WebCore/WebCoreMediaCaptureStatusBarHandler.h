@class NSString;

@interface WebCoreMediaCaptureStatusBarHandler : NSObject <SBSStatusBarStyleOverridesCoordinatorDelegate> {
    struct WeakPtr<WebCore::MediaCaptureStatusBarManager, WTF::DefaultWeakPtrImpl> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } m_manager;
    struct RetainPtr<SBSStatusBarStyleOverridesAssertion> { void *m_ptr; } m_statusBarStyleOverride;
    struct RetainPtr<SBSStatusBarStyleOverridesCoordinator> { void *m_ptr; } m_coordinator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithManager:(void *)a0;
- (id).cxx_construct;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)statusBarCoordinator:(id)a0 invalidatedRegistrationWithError:(id)a1;
- (BOOL)statusBarCoordinator:(id)a0 receivedTapWithContext:(id)a1 completionBlock:(id /* block */)a2;
- (void)validateIsStopped;

@end
