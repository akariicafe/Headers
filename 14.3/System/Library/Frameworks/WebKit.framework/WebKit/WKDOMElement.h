@class NSString;

@interface WKDOMElement : WKDOMNode

@property (readonly) NSString *tagName;

- (BOOL)hasAttribute:(id)a0;
- (id)getAttribute:(id)a0;
- (void)setAttribute:(id)a0 value:(id)a1;

@end
