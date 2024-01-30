@class DOMNode;
@protocol DOMNodeFilter;

@interface DOMNodeIterator : DOMObject

@property (readonly) DOMNode *root;
@property (readonly) unsigned int whatToShow;
@property (readonly) id<DOMNodeFilter> filter;
@property (readonly) BOOL expandEntityReferences;
@property (readonly) DOMNode *referenceNode;
@property (readonly) BOOL pointerBeforeReferenceNode;

- (void)detach;
- (void)dealloc;
- (id)previousNode;
- (id)nextNode;

@end
