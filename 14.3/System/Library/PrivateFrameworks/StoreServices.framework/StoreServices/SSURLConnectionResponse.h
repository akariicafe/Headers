@class NSString, NSHTTPURLResponse, NSData, SSMetricsPageEvent, NSURL;

@interface SSURLConnectionResponse : NSObject <SSXPCCoding>

@property (readonly, nonatomic) BOOL ssv_isExpiredResponse;
@property (readonly, nonatomic) NSData *databaseEncoding;
@property (retain, nonatomic) SSMetricsPageEvent *metricsPageEvent;
@property (readonly, nonatomic) NSString *storeCorrelationID;
@property (readonly, nonatomic) NSHTTPURLResponse *URLResponse;
@property (readonly, nonatomic) NSData *bodyData;
@property (readonly, nonatomic) long long expectedContentLength;
@property (readonly, nonatomic) NSString *MIMEType;
@property (readonly, nonatomic) NSString *suggestedFilename;
@property (readonly, nonatomic) NSString *textEncodingName;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (long long)statusCode;
- (void)dealloc;
- (id)initWithDatabaseEncoding:(id)a0;
- (id)allHeaderFields;
- (id)initWithURLResponse:(id)a0 bodyData:(id)a1;

@end
