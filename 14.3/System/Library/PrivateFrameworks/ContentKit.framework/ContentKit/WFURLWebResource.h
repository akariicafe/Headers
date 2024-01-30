@class NSURL;

@interface WFURLWebResource : WFWebResource

@property (readonly, nonatomic) NSURL *URL;

- (id)request;
- (id)initWithURL:(id)a0;
- (id)loadInWKWebView:(id)a0;

@end
