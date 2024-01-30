@class NSString;

@interface IKBadgeElement : IKImageElement

@property (readonly, retain, nonatomic) NSString *textContent;

+ (BOOL)shouldParseChildDOMElements;

@end
