@class DOMNode;
@protocol DOMNodeFilter;

@interface DOMTreeWalker : DOMObject

@property (readonly) DOMNode *root;
@property (readonly) unsigned int whatToShow;
@property (readonly) id<DOMNodeFilter> filter;
@property (readonly) BOOL expandEntityReferences;
@property (retain) DOMNode *currentNode;

- (id)nextNode;
- (id)lastChild;
- (id)parentNode;
- (id)previousSibling;
- (id)firstChild;
- (id)nextSibling;
- (void)dealloc;
- (id)previousNode;

@end
