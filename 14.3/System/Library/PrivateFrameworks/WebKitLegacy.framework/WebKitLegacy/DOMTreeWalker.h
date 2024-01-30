@class DOMNode;
@protocol DOMNodeFilter;

@interface DOMTreeWalker : DOMObject

@property (readonly) DOMNode *root;
@property (readonly) unsigned int whatToShow;
@property (readonly) id<DOMNodeFilter> filter;
@property (readonly) BOOL expandEntityReferences;
@property (retain) DOMNode *currentNode;

- (id)nextNode;
- (void)dealloc;
- (id)previousNode;
- (id)previousSibling;
- (id)lastChild;
- (id)parentNode;
- (id)firstChild;
- (id)nextSibling;

@end
