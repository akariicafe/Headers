@class NSString, SSURLRequestProperties, NSData, NSHTTPURLResponse, NSURLRequest;

@interface SSVSAPSignatureDataSource : NSObject {
    NSData *_bodyData;
    NSURLRequest *_request;
    SSURLRequestProperties *_requestProperties;
    NSHTTPURLResponse *_response;
}

@property (readonly, nonatomic) NSData *HTTPBody;
@property (readonly, nonatomic) NSString *HTTPMethod;

- (id)initWithURLRequest:(id)a0;
- (void).cxx_destruct;
- (id)valueForHTTPHeader:(id)a0;
- (id)valueForQueryParameter:(id)a0;
- (id)initWithURLRequestProperties:(id)a0;
- (id)initWithURLResponse:(id)a0 bodyData:(id)a1;

@end
