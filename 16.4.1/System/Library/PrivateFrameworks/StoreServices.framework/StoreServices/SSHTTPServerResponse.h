@class NSData, NSDictionary;

@interface SSHTTPServerResponse : NSObject

@property (retain, nonatomic) NSData *body;
@property (retain, nonatomic) NSDictionary *headers;
@property (nonatomic) short statusCode;

- (void).cxx_destruct;
- (struct __CFHTTPMessage { } *)copyHTTPMessage;
- (void)setBodyWithBag:(id)a0;
- (id)bagFromBody;
- (id)initWithStatusCode:(short)a0;

@end
