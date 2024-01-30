@class NSURL, NSData, NSUUID;

@interface TransparencyNetworkRequest : NSObject

@property BOOL authenticated;
@property (retain) NSURL *url;
@property (retain) NSData *data;
@property double timeout;
@property BOOL isGET;
@property (retain) NSUUID *uuid;

+ (void)addDeviceAuthentication:(id)a0 signature:(id)a1 timestamp:(id)a2 certs:(id)a3;
+ (BOOL)addAccountAuthentication:(id)a0 error:(id *)a1;

- (id)initWithRequest:(id)a0;
- (void)createRequestForAuthentication:(id)a0 completionHandler:(id /* block */)a1;
- (id)createGETRequestForURL:(id)a0 timeout:(double)a1 error:(id *)a2;
- (void)createRequestForAuthentication:(id)a0 fetchAuthNow:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 data:(id)a1 timeout:(double)a2 isGET:(BOOL)a3 uuid:(id)a4;
- (id)initGETWithURL:(id)a0;
- (id)initPOSTWithURL:(id)a0 data:(id)a1 uuid:(id)a2;
- (id)createPOSTRequestForURL:(id)a0 timeout:(double)a1 contents:(id)a2 authentication:(id)a3 fetchAuthNow:(BOOL)a4 timeShift:(double)a5 completionHandler:(id /* block */)a6;
- (void)createRequestForAuthentication:(id)a0 fetchAuthNow:(BOOL)a1 timeShift:(double)a2 completionHandler:(id /* block */)a3;

@end
