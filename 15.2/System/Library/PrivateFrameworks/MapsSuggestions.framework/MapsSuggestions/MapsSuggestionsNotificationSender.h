@interface MapsSuggestionsNotificationSender : NSObject {
    struct unique_ptr<MSg::NotificationSender, std::default_delete<MSg::NotificationSender>> { struct __compressed_pair<MSg::NotificationSender *, std::default_delete<MSg::NotificationSender>> { struct NotificationSender *__value_; } __ptr_; } _sender;
}

- (id)initWithDarwinNotification:(const char *)a0;
- (void)notify;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)notifyWithState:(unsigned long long)a0;
- (void)notifyWithPayloadString:(id)a0;

@end
