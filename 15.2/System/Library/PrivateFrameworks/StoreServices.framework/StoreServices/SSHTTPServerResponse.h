@class NSData, NSDictionary;

@interface SSHTTPServerResponse : NSObject

@property (retain, nonatomic) NSData *body;
@property (retain, nonatomic) NSDictionary *headers;
@property (nonatomic) short statusCode;

- (void).cxx_destruct;
- (id)initWithStatusCode:(short)a0;
- (void)setBodyWithBag:(id)a0;
- (id)bagFromBody;
- (struct __CFHTTPMessage { } *)copyHTTPMessage;

@end
