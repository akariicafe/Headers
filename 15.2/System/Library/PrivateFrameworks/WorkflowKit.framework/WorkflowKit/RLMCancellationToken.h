@class RLMRealm;

@interface RLMCancellationToken : RLMNotificationToken {
    struct NotificationToken { struct AtomicSharedPtr<realm::_impl::CollectionNotifier, true> { struct shared_ptr<realm::_impl::CollectionNotifier> { struct CollectionNotifier *__ptr_; struct __shared_weak_count *__cntrl_; } m_ptr; } m_notifier; unsigned long long m_token; } _token;
    RLMRealm *_realm;
}

- (id)realm;
- (void).cxx_destruct;
- (void)invalidate;
- (id).cxx_construct;
- (id)initWithToken:(struct NotificationToken { struct AtomicSharedPtr<realm::_impl::CollectionNotifier, true> { struct shared_ptr<realm::_impl::CollectionNotifier> { struct CollectionNotifier *x0; struct __shared_weak_count *x1; } x0; } x0; unsigned long long x1; })a0 realm:(id)a1;
- (void)suppressNextNotification;

@end
