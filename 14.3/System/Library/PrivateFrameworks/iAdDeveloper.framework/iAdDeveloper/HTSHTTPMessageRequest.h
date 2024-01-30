@class NSString, NSURL;

@interface HTSHTTPMessageRequest : HTSHTTPMessage

@property (copy, nonatomic) NSString *requestMethod;
@property (copy, nonatomic) NSURL *requestURL;

- (id)initWithRequest:(struct __CFHTTPMessage { } *)a0;
- (void)dealloc;
- (id)responseWithStatus:(int)a0;
- (struct __CFHTTPMessage { } *)copyMessage;
- (BOOL)responseCanUseGZip;

@end
