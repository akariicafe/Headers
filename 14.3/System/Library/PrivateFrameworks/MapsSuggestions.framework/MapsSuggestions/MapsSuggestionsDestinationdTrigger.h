@class NSSet;

@interface MapsSuggestionsDestinationdTrigger : MapsSuggestionsBaseTrigger {
    struct unique_ptr<MSg::NotificationReceiver, std::__1::default_delete<MSg::NotificationReceiver> > { struct __compressed_pair<MSg::NotificationReceiver *, std::__1::default_delete<MSg::NotificationReceiver> > { struct NotificationReceiver *__value_; } __ptr_; } _notificationReceiver;
    NSSet *_ignoredPeerIdentifiers;
}

- (id)init;
- (void).cxx_destruct;
- (void)didRemoveLastObserver;
- (id)initWithName:(id)a0 queue:(id)a1;
- (id).cxx_construct;
- (void)addIgnoredClientProcess:(id)a0;
- (void)didAddFirstObserver;

@end
