@class NSURLRequest, NSHTTPURLResponse, NSMutableData;

@interface IKURLConnection : NSURLConnection {
    id _context;
}

@property (readonly, nonatomic) NSURLRequest *request;
@property (readonly, nonatomic) NSHTTPURLResponse *response;
@property (readonly, nonatomic) NSMutableData *data;
@property (readonly, nonatomic) id userInfo;
@property (readonly, nonatomic) int type;

- (id)_context;
- (id)initWithRequest:(id)a0 delegate:(id)a1 startImmediately:(BOOL)a2;
- (void)dealloc;
- (void)_setResponse:(id)a0;
- (void)_setType:(int)a0;
- (void)_setContext:(id)a0;
- (void)_appendData:(id)a0;
- (void)_setUserInfo:(id)a0;

@end
