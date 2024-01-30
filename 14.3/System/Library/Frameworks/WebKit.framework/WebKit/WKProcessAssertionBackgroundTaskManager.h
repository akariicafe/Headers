@class NSString;

@interface WKProcessAssertionBackgroundTaskManager : NSObject <RBSAssertionObserving> {
    struct RetainPtr<RBSAssertion> { void *m_ptr; } _backgroundTask;
    struct WeakHashSet<WebKit::ProcessAndUIAssertion, WTF::EmptyCounter> { struct HashSet<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > >, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > >, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > > > { struct HashTable<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > >, WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > >, WTF::IdentityExtractor, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > >, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > >, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > > > { struct Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > *m_table; } m_impl; } m_set; } _assertionsNeedingBackgroundTask;
    id /* block */ _pendingTaskReleaseTask;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)_handleBackgroundTaskExpiration;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_hasBackgroundTask;
- (void)_releaseBackgroundTask;
- (void)dealloc;
- (void)_handleBackgroundTaskExpirationOnMainThread;
- (void)_scheduleReleaseTask;
- (void)assertionWillInvalidate:(id)a0;
- (void)assertion:(id)a0 didInvalidateWithError:(id)a1;
- (id).cxx_construct;
- (void)_updateBackgroundTask;
- (void)removeAssertionNeedingBackgroundTask:(struct ProcessAndUIAssertion { void /* function */ **x0; struct WeakPtrFactory<WebKit::ProcessAssertion, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *x0; } x0; } x1; int x2; int x3; struct RetainPtr<RBSAssertion> { void *x0; } x4; struct RetainPtr<WKRBSAssertionDelegate> { void *x0; } x5; struct Function<void ()> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void> > > { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void> > > { struct CallableWrapperBase<void> *x0; } x0; } x0; } x6; struct Function<void ()> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void> > > { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void> > > { struct CallableWrapperBase<void> *x0; } x0; } x0; } x7; BOOL x8; } *)a0;
- (void)_cancelPendingReleaseTask;
- (void)_notifyAssertionsOfImminentSuspension;
- (void)addAssertionNeedingBackgroundTask:(struct ProcessAndUIAssertion { void /* function */ **x0; struct WeakPtrFactory<WebKit::ProcessAssertion, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *x0; } x0; } x1; int x2; int x3; struct RetainPtr<RBSAssertion> { void *x0; } x4; struct RetainPtr<WKRBSAssertionDelegate> { void *x0; } x5; struct Function<void ()> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void> > > { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void> > > { struct CallableWrapperBase<void> *x0; } x0; } x0; } x6; struct Function<void ()> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void> > > { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void> > > { struct CallableWrapperBase<void> *x0; } x0; } x0; } x7; BOOL x8; } *)a0;

@end
