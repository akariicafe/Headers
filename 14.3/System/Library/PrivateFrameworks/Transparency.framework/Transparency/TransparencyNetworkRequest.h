@class NSURL, NSData;

@interface TransparencyNetworkRequest : NSObject

@property (retain) NSURL *url;
@property (retain) NSData *data;
@property double timeout;
@property BOOL isGET;
@property BOOL authenticated;

- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 data:(id)a1 timeout:(double)a2 isGET:(BOOL)a3;
- (id)initGETWithURL:(id)a0;
- (id)initPOSTWithURL:(id)a0 data:(id)a1;
- (id)createGETRequestForURL:(id)a0 timeout:(double)a1 error:(id *)a2;
- (id)createPOSTRequestForURL:(id)a0 timeout:(double)a1 contents:(id)a2 error:(id *)a3;
- (id)copyRequest:(id *)a0;

@end
