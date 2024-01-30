@class NSDictionary, NSData;

@interface _HMFCFHTTPMessage : HMFObject

@property (readonly, nonatomic) struct __CFHTTPMessage { } *message;
@property (readonly, nonatomic) NSDictionary *headerFields;
@property (copy, nonatomic) NSData *body;

+ (id)dateFormatter;
+ (id)requestWithMethod:(id)a0 url:(id)a1 protocolVersion:(long long)a2;
+ (id)responseWithStatusCode:(long long)a0 statusDescription:(id)a1 protocolVersion:(long long)a2;

- (long long)contentLength;
- (void)setContentType:(id)a0;
- (id)contentType;
- (void)setDate:(id)a0;
- (void)setContentLength:(long long)a0;
- (void)dealloc;
- (id)date;
- (id)init;
- (id)initWithMessageRef:(struct __CFHTTPMessage { } *)a0;
- (void)setValue:(id)a0 forHeaderField:(id)a1;
- (id)valueForHeaderField:(id)a0;

@end
