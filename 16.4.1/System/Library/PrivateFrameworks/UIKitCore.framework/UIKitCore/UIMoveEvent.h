@interface UIMoveEvent : UIEvent

@property (nonatomic, setter=_setMoveDirection:) long long _moveDirection;
@property (nonatomic, setter=_setFocusHeading:) unsigned long long _focusHeading;

- (long long)type;
- (void)_sendEventToResponder:(id)a0;

@end
