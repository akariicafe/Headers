@class NSDictionary, NSURL, NSData, NSNumber;

@interface FTURLRequestMessage : FTIDSMessage <NSCopying>

@property (nonatomic) unsigned long long requestType;
@property (copy, nonatomic) NSURL *requestURL;
@property (copy, nonatomic) NSDictionary *requestHeaders;
@property (copy, nonatomic) NSDictionary *requestStringParams;
@property (copy, nonatomic) NSData *requestBody;
@property (copy, nonatomic) NSDictionary *responseHeaders;
@property (copy, nonatomic) NSData *responseBody;
@property (copy, nonatomic) NSNumber *responseStatusCode;
@property (copy, nonatomic) NSDictionary *timingData;

- (id)initWithURL:(id)a0 type:(unsigned long long)a1 headers:(id)a2 stringParams:(id)a3 body:(id)a4;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)wantsIDSServer;
- (BOOL)wantsHTTPGet;
- (BOOL)allowDualDelivery;
- (BOOL)wantsManagedRetries;
- (BOOL)wantsBodySignature;
- (BOOL)wantsIDSSignatures;
- (id)messageBodyDataOverride;
- (BOOL)isIDSMessage;
- (id)additionalMessageHeaders;
- (id)additionalQueryStringParameters;
- (void)handleResponseHeaders:(id)a0;
- (void)handleResponseBody:(id)a0;
- (void)handleResponseStatus:(unsigned long long)a0;

@end
