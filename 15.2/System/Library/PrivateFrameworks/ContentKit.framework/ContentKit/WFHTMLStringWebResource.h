@class NSString, NSURL;

@interface WFHTMLStringWebResource : WFWebResource

@property (readonly, nonatomic) NSString *htmlString;
@property (readonly, nonatomic) NSURL *baseURL;

+ (BOOL)supportsSecureCoding;

- (id)MIMEType;
- (id)textEncodingName;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)URL;
- (id)data;
- (id)loadInWKWebView:(id)a0;
- (id)initWithHTMLString:(id)a0 baseURL:(id)a1;

@end
