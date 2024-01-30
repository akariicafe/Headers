@class NSMutableSet, NSURLSessionDataTask;

@interface PKObjectDownload : NSObject

@property (retain, nonatomic) NSMutableSet *completionHandlers;
@property (copy, nonatomic) NSURLSessionDataTask *task;

- (id)init;
- (void).cxx_destruct;

@end
