@interface UIRemoteControlEvent : UIEvent {
    long long _subtype;
}

- (id)_windows;
- (long long)subtype;
- (void)_setSubtype:(long long)a0;
- (void)_sendEventToResponder:(id)a0;
- (void)dealloc;
- (void)_simpleRemoteActionNotification:(id)a0;
- (long long)type;
- (id)_init;

@end
