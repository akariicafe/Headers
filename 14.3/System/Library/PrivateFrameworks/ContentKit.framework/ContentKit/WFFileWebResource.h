@class WFFileRepresentation;

@interface WFFileWebResource : WFWebResource

@property (readonly, nonatomic) WFFileRepresentation *file;

+ (BOOL)supportsSecureCoding;

- (id)MIMEType;
- (void).cxx_destruct;
- (id)data;
- (id)initWithCoder:(id)a0;
- (id)initWithFile:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)loadInWKWebView:(id)a0;

@end
