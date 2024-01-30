@class NSString, DOMStyleSheet;

@interface DOMHTMLStyleElement : DOMHTMLElement

@property BOOL disabled;
@property (copy) NSString *media;
@property (copy) NSString *type;
@property (readonly) DOMStyleSheet *sheet;

- (id)nonce;
- (void)setNonce:(id)a0;

@end
