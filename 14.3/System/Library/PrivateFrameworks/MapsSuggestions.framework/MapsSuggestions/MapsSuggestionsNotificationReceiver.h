@interface MapsSuggestionsNotificationReceiver : NSObject {
    struct unique_ptr<MSg::NotificationReceiver, std::__1::default_delete<MSg::NotificationReceiver> > { struct __compressed_pair<MSg::NotificationReceiver *, std::__1::default_delete<MSg::NotificationReceiver> > { struct NotificationReceiver *__value_; } __ptr_; } _receiver;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDarwinNotification:(const char *)a0 queue:(id)a1 block:(id /* block */)a2;
- (id)initWithDarwinNotification:(const char *)a0 block:(id /* block */)a1;
- (id).cxx_construct;

@end
