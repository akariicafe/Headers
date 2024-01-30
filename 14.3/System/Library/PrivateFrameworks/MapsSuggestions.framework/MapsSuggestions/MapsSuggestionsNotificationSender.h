@interface MapsSuggestionsNotificationSender : NSObject {
    struct unique_ptr<MSg::NotificationSender, std::__1::default_delete<MSg::NotificationSender> > { struct __compressed_pair<MSg::NotificationSender *, std::__1::default_delete<MSg::NotificationSender> > { struct NotificationSender *__value_; } __ptr_; } _sender;
}

- (void)notify;
- (void).cxx_destruct;
- (void)notifyWithState:(unsigned long long)a0;
- (void)notifyWithPayloadString:(id)a0;
- (id).cxx_construct;
- (id)initWithDarwinNotification:(const char *)a0;

@end
