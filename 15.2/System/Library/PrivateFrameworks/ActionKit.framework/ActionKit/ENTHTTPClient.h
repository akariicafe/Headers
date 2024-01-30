@class NSString, NSData, NSMutableData, NSURL;

@interface ENTHTTPClient : NSObject <ENTTransport>

@property (retain, nonatomic) NSMutableData *requestData;
@property (retain, nonatomic) NSData *responseData;
@property (nonatomic) int responseDataOffset;
@property (retain, nonatomic) NSString *userAgent;
@property (nonatomic) int timeout;
@property (retain, nonatomic) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flush;
- (id)initWithURL:(id)a0;
- (id)newRequest;
- (void).cxx_destruct;
- (void)cancel;
- (int)readAll:(char *)a0 offset:(int)a1 length:(int)a2;
- (void)write:(const char *)a0 offset:(unsigned int)a1 length:(unsigned int)a2;
- (id)initWithURL:(id)a0 userAgent:(id)a1 timeout:(int)a2;

@end
