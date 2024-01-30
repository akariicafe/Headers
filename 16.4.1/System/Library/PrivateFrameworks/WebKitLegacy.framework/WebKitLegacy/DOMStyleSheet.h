@class NSString, DOMNode, DOMMediaList;

@interface DOMStyleSheet : DOMObject

@property (readonly, copy) NSString *type;
@property BOOL disabled;
@property (readonly) DOMNode *ownerNode;
@property (readonly) DOMStyleSheet *parentStyleSheet;
@property (readonly, copy) NSString *href;
@property (readonly, copy) NSString *title;
@property (readonly) DOMMediaList *media;

- (void)dealloc;

@end
