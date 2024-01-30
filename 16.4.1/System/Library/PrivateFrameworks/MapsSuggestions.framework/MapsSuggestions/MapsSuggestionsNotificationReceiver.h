@interface MapsSuggestionsNotificationReceiver : NSObject {
    struct unique_ptr<MSg::NotificationReceiver, std::default_delete<MSg::NotificationReceiver>> { struct __compressed_pair<MSg::NotificationReceiver *, std::default_delete<MSg::NotificationReceiver>> { struct NotificationReceiver *__value_; } __ptr_; } _receiver;
}

- (id).cxx_construct;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDarwinNotification:(const char *)a0 block:(id /* block */)a1;
- (id)initWithDarwinNotification:(const char *)a0 queue:(id)a1 block:(id /* block */)a2;

@end
