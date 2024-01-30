@interface MapsSuggestionsNotificationReceiver : NSObject {
    struct unique_ptr<MSg::NotificationReceiver, std::default_delete<MSg::NotificationReceiver>> { struct __compressed_pair<MSg::NotificationReceiver *, std::default_delete<MSg::NotificationReceiver>> { struct NotificationReceiver *__value_; } __ptr_; } _receiver;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithDarwinNotification:(const char *)a0 queue:(id)a1 block:(id /* block */)a2;
- (id)initWithDarwinNotification:(const char *)a0 block:(id /* block */)a1;

@end
