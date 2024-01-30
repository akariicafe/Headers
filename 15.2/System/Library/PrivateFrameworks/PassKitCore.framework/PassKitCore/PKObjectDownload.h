@class NSMutableSet, NSURLSessionDataTask;

@interface PKObjectDownload : NSObject

@property (retain, nonatomic) NSMutableSet *completionHandlers;
@property (copy, nonatomic) NSURLSessionDataTask *task;

- (void).cxx_destruct;
- (id)init;

@end
