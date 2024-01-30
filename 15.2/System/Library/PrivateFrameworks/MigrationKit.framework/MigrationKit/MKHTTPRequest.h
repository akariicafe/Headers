@class NSString, MKHTTPParameters, NSMutableData, MKHTTPHeaders;

@interface MKHTTPRequest : NSObject

@property (retain, nonatomic) MKHTTPHeaders *headers;
@property (retain, nonatomic) MKHTTPParameters *parameters;
@property (retain, nonatomic) NSMutableData *body;
@property (copy, nonatomic) NSString *hostname;

- (void)appendData:(id)a0;
- (void).cxx_destruct;
- (id)initWithHeaders:(id)a0 body:(id)a1 hostname:(id)a2;

@end
