@class WFFileRepresentation;

@interface WFFileWebResource : WFWebResource

@property (readonly, nonatomic) WFFileRepresentation *file;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFile:(id)a0;
- (id)data;
- (void).cxx_destruct;
- (id)MIMEType;
- (id)loadInWKWebView:(id)a0;

@end
