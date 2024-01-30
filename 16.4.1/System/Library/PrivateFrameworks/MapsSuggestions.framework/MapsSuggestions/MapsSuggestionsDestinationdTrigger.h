@class NSSet;

@interface MapsSuggestionsDestinationdTrigger : MapsSuggestionsBaseTrigger {
    struct unique_ptr<MSg::NotificationReceiver, std::default_delete<MSg::NotificationReceiver>> { struct __compressed_pair<MSg::NotificationReceiver *, std::default_delete<MSg::NotificationReceiver>> { struct NotificationReceiver *__value_; } __ptr_; } _notificationReceiver;
    NSSet *_ignoredPeerIdentifiers;
}

- (void)didAddFirstObserver;
- (id)initWithName:(id)a0;
- (id).cxx_construct;
- (void)didRemoveLastObserver;
- (id)init;
- (void)addIgnoredClientProcess:(id)a0;
- (void).cxx_destruct;

@end
