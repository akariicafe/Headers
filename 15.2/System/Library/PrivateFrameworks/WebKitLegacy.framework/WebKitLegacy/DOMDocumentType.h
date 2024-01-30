@class NSString, DOMNamedNodeMap;

@interface DOMDocumentType : DOMNode

@property (readonly, copy) NSString *name;
@property (readonly) DOMNamedNodeMap *entities;
@property (readonly) DOMNamedNodeMap *notations;
@property (readonly, copy) NSString *publicId;
@property (readonly, copy) NSString *systemId;
@property (readonly, copy) NSString *internalSubset;

- (void)remove;

@end
