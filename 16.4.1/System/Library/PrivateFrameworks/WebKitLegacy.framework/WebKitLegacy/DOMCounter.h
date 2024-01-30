@class NSString;

@interface DOMCounter : DOMObject

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *listStyle;
@property (readonly, copy) NSString *separator;

- (void)dealloc;

@end
