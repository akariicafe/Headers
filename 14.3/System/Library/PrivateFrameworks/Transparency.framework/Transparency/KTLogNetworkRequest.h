@class NSString, NSUUID, NSURL, NSData;

@interface KTLogNetworkRequest : TransparencyNetworkRequest

@property (retain) NSString *application;
@property BOOL isGET;
@property (retain) NSURL *url;
@property (retain) NSData *data;
@property (retain) NSUUID *uuid;
@property double timeout;

- (void).cxx_destruct;
- (id)createGETRequestForURL:(id)a0 timeout:(double)a1 error:(id *)a2;
- (id)createPOSTRequestForURL:(id)a0 timeout:(double)a1 contents:(id)a2 error:(id *)a3;
- (id)copyRequest:(id *)a0;
- (id)initGETWithURL:(id)a0 application:(id)a1;
- (id)initPOSTWithURL:(id)a0 data:(id)a1 uuid:(id)a2 application:(id)a3;

@end
