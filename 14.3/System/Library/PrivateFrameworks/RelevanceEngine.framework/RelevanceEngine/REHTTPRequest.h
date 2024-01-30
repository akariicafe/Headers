@class NSMutableData, NSString, NSDictionary, NSURL, NSData, REHTTPConnection, NSInputStream;

@interface REHTTPRequest : NSObject {
    NSInputStream *_stream;
    NSMutableData *_bodyData;
}

@property (readonly, nonatomic) struct _CFHTTPServerRequest { } *request;
@property (readonly, nonatomic) NSInputStream *stream;
@property (readonly, nonatomic) REHTTPConnection *connection;
@property (readonly, nonatomic) NSString *method;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSDictionary *headerFields;
@property (readonly, nonatomic) NSData *bodyData;

- (void).cxx_destruct;
- (void)dealloc;
- (void)appendData:(id)a0;
- (id)responseWithStatusCode:(long long)a0;
- (id)initWithConnect:(id)a0 request:(struct _CFHTTPServerRequest { } *)a1;

@end
