@class NSString;

@interface DOMHTMLScriptElement : DOMHTMLElement

@property (copy) NSString *text;
@property (copy) NSString *htmlFor;
@property (copy) NSString *event;
@property (copy) NSString *charset;
@property BOOL defer;
@property (copy) NSString *src;
@property (copy) NSString *type;

- (id)nonce;
- (BOOL)async;
- (void)setAsync:(BOOL)a0;
- (void)setNonce:(id)a0;
- (id)crossOrigin;
- (void)setCrossOrigin:(id)a0;

@end
