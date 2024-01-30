@class NSString;

@interface DOMKeyboardEvent : DOMUIEvent

@property (readonly, copy) NSString *keyIdentifier;
@property (readonly) unsigned int location;
@property (readonly) unsigned int keyLocation;
@property (readonly) BOOL ctrlKey;
@property (readonly) BOOL shiftKey;
@property (readonly) BOOL altKey;
@property (readonly) BOOL metaKey;
@property (readonly) BOOL altGraphKey;
@property (readonly) int keyCode;
@property (readonly) int charCode;

- (BOOL)getModifierState:(id)a0;
- (void)initKeyboardEvent:(id)a0 canBubble:(BOOL)a1 cancelable:(BOOL)a2 view:(id)a3 keyIdentifier:(id)a4 keyLocation:(unsigned int)a5 ctrlKey:(BOOL)a6 altKey:(BOOL)a7 shiftKey:(BOOL)a8 metaKey:(BOOL)a9;
- (void)initKeyboardEvent:(id)a0 canBubble:(BOOL)a1 cancelable:(BOOL)a2 view:(id)a3 keyIdentifier:(id)a4 keyLocation:(unsigned int)a5 ctrlKey:(BOOL)a6 altKey:(BOOL)a7 shiftKey:(BOOL)a8 metaKey:(BOOL)a9 altGraphKey:(BOOL)a10;
- (void)initKeyboardEvent:(id)a0 canBubble:(BOOL)a1 cancelable:(BOOL)a2 view:(id)a3 keyIdentifier:(id)a4 location:(unsigned int)a5 ctrlKey:(BOOL)a6 altKey:(BOOL)a7 shiftKey:(BOOL)a8 metaKey:(BOOL)a9;
- (void)initKeyboardEvent:(id)a0 canBubble:(BOOL)a1 cancelable:(BOOL)a2 view:(id)a3 keyIdentifier:(id)a4 location:(unsigned int)a5 ctrlKey:(BOOL)a6 altKey:(BOOL)a7 shiftKey:(BOOL)a8 metaKey:(BOOL)a9 altGraphKey:(BOOL)a10;

@end
