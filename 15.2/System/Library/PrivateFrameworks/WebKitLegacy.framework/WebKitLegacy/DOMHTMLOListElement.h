@class NSString;

@interface DOMHTMLOListElement : DOMHTMLElement

@property BOOL compact;
@property int start;
@property (copy) NSString *type;

- (void)setReversed:(BOOL)a0;
- (BOOL)reversed;

@end
