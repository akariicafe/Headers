@class NSString;

@interface DOMHTMLScriptElement : DOMHTMLElement

@property (copy) NSString *text;
@property (copy) NSString *htmlFor;
@property (copy) NSString *event;
@property (copy) NSString *charset;
@property BOOL defer;
@property (copy) NSString *src;
@property (copy) NSString *type;

- (void)setAsync:(BOOL)a0;
- (id)nonce;
- (void)setNonce:(id)a0;
- (BOOL)async;
- (id)crossOrigin;
- (void)setCrossOrigin:(id)a0;

@end
