@class NSString, NSURL;

@interface WFHTMLStringWebResource : WFWebResource

@property (readonly, nonatomic) NSString *htmlString;
@property (readonly, nonatomic) NSURL *baseURL;

+ (BOOL)supportsSecureCoding;

- (id)URL;
- (id)MIMEType;
- (void).cxx_destruct;
- (id)data;
- (id)initWithCoder:(id)a0;
- (id)textEncodingName;
- (void)encodeWithCoder:(id)a0;
- (id)loadInWKWebView:(id)a0;
- (id)initWithHTMLString:(id)a0 baseURL:(id)a1;

@end
