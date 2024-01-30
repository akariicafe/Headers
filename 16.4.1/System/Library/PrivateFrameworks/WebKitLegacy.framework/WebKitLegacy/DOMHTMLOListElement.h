@class NSString;

@interface DOMHTMLOListElement : DOMHTMLElement

@property BOOL compact;
@property int start;
@property (copy) NSString *type;

- (BOOL)reversed;
- (void)setReversed:(BOOL)a0;

@end
