@class NSURLRequest, NSURL, NSURLResponse;

@interface NEFilterBrowserFlow : NEFilterFlow <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSURLRequest *request;
@property (retain) NSURLResponse *response;
@property (retain) NSURL *parentURL;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)createDataReply:(id)a0 controlSocket:(int)a1 direction:(long long)a2 verdict:(id)a3 context:(id)a4;
- (BOOL)createNewFlowReply:(id)a0 controlSocket:(int)a1 verdict:(id)a2 context:(id)a3;
- (BOOL)createDataCompleteReply:(id)a0 controlSocket:(int)a1 direction:(long long)a2 verdict:(id)a3 context:(id)a4;
- (id)initWithURL:(id)a0 parentURL:(id)a1 sourceAppIdentifier:(id)a2;
- (void).cxx_destruct;
- (id)cleanRemediationURL:(id)a0 flow:(id)a1 providerConfiguration:(id)a2;
- (id)sanitizeRemediationButtonText:(id)a0;
- (BOOL)createDropReply:(id)a0 verdict:(id)a1 context:(id)a2;
- (void)writeCurrentVerdictInReply:(id)a0 direction:(long long)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
