@class NSString, DOMNode;

@interface DOMXPathResult : DOMObject

@property (readonly) unsigned short resultType;
@property (readonly) double numberValue;
@property (readonly, copy) NSString *stringValue;
@property (readonly) BOOL booleanValue;
@property (readonly) DOMNode *singleNodeValue;
@property (readonly) BOOL invalidIteratorState;
@property (readonly) unsigned int snapshotLength;

- (void)dealloc;
- (id)iterateNext;
- (id)snapshotItem:(unsigned int)a0;

@end
