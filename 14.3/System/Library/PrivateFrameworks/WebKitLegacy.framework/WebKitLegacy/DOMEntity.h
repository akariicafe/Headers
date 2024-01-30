@class NSString;

@interface DOMEntity : DOMNode

@property (readonly, copy) NSString *publicId;
@property (readonly, copy) NSString *systemId;
@property (readonly, copy) NSString *notationName;

@end
