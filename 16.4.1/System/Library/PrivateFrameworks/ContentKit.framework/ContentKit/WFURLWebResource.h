@class NSURL;

@interface WFURLWebResource : WFWebResource

@property (readonly, nonatomic) NSURL *URL;

- (id)initWithURL:(id)a0;
- (id)request;
- (id)loadInWKWebView:(id)a0;

@end
