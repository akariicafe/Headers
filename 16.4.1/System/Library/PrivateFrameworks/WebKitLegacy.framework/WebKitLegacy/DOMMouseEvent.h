@class DOMNode;
@protocol DOMEventTarget;

@interface DOMMouseEvent : DOMUIEvent

@property (readonly) int screenX;
@property (readonly) int screenY;
@property (readonly) int clientX;
@property (readonly) int clientY;
@property (readonly) BOOL ctrlKey;
@property (readonly) BOOL shiftKey;
@property (readonly) BOOL altKey;
@property (readonly) BOOL metaKey;
@property (readonly) short button;
@property (readonly) id<DOMEventTarget> relatedTarget;
@property (readonly) int offsetX;
@property (readonly) int offsetY;
@property (readonly) int x;
@property (readonly) int y;
@property (readonly) DOMNode *fromElement;
@property (readonly) DOMNode *toElement;

- (void)initMouseEvent:(id)a0 :(BOOL)a1 :(BOOL)a2 :(id)a3 :(int)a4 :(int)a5 :(int)a6 :(int)a7 :(int)a8 :(BOOL)a9 :(BOOL)a10 :(BOOL)a11 :(BOOL)a12 :(unsigned short)a13 :(id)a14;
- (void)initMouseEvent:(id)a0 canBubble:(BOOL)a1 cancelable:(BOOL)a2 view:(id)a3 detail:(int)a4 screenX:(int)a5 screenY:(int)a6 clientX:(int)a7 clientY:(int)a8 ctrlKey:(BOOL)a9 altKey:(BOOL)a10 shiftKey:(BOOL)a11 metaKey:(BOOL)a12 button:(unsigned short)a13 relatedTarget:(id)a14;

@end
