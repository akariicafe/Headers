@class NSData, NSURLSessionDataTask, NSHTTPURLResponse;

@interface DEDDataTask : NSObject

@property (retain) NSURLSessionDataTask *dataTask;
@property (retain) NSHTTPURLResponse *response;
@property (retain) NSData *data;
@property BOOL isFinished;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDataTask:(id)a0;

@end
