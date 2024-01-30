@class NSString, NSDictionary, NSData, NSDate, REHTTPRequest;

@interface REHTTPResponse : NSObject {
    REHTTPRequest *_request;
    struct __CFHTTPMessage { } *_message;
}

@property (readonly, nonatomic) long long statusCode;
@property (readonly, copy, nonatomic) NSDictionary *headerFields;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSData *body;

- (id)_dateFormatter;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setHeaderValue:(id)a0 forKey:(id)a1;
- (struct _CFHTTPServerResponse { } *)response;
- (id)initWithRequest:(id)a0 statusCode:(long long)a1;
- (id)headerValueForKey:(id)a0;

@end
