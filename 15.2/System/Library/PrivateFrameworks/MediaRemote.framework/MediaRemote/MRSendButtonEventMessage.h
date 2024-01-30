@interface MRSendButtonEventMessage : MRProtocolMessage

@property (readonly, nonatomic) struct _MRHIDButtonEvent { unsigned int x0; unsigned int x1; BOOL x2; } buttonEvent;

- (id)initWithButtonEvent:(struct _MRHIDButtonEvent { unsigned int x0; unsigned int x1; BOOL x2; })a0;
- (unsigned long long)type;

@end
