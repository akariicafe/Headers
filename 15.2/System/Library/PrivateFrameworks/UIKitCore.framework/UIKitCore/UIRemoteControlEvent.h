@interface UIRemoteControlEvent : UIEvent {
    long long _subtype;
}

- (void)_setSubtype:(long long)a0;
- (id)_windows;
- (long long)subtype;
- (void)_sendEventToResponder:(id)a0;
- (void)_simpleRemoteActionNotification:(id)a0;
- (id)_init;
- (long long)type;
- (void)dealloc;

@end
