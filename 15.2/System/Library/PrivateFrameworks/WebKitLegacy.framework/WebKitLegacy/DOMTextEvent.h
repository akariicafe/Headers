@class NSString;

@interface DOMTextEvent : DOMUIEvent

@property (readonly, copy) NSString *data;

- (void)initTextEvent:(id)a0 canBubbleArg:(BOOL)a1 cancelableArg:(BOOL)a2 viewArg:(id)a3 dataArg:(id)a4;

@end
