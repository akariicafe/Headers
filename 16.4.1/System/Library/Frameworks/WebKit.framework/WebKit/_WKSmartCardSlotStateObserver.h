@interface _WKSmartCardSlotStateObserver : NSObject {
    struct WeakPtr<WebKit::CcidService, WTF::DefaultWeakPtrImpl> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } m_service;
    struct RetainPtr<TKSmartCardSlot> { void *m_ptr; } m_slot;
}

- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithService:(void *)a0 slot:(void *)a1;

@end
