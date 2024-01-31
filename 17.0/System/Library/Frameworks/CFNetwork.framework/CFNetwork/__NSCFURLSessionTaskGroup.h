@class NSURLSessionConfiguration, NSString, NSURLSession;

@interface __NSCFURLSessionTaskGroup : NSObject <__NSURLSessionTaskGroupForConfiguration> {
    NSURLSessionConfiguration *_groupConfiguration_ivar;
    NSURLSession *_groupSession_ivar;
}

@property (readonly, weak) NSURLSessionConfiguration *_groupConfiguration;
@property (readonly, weak) NSURLSession *_groupSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)dataTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)uploadTaskWithStreamedRequest:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)dataTaskWithRequest:(id)a0;
- (id)_groupConfiguration;
- (id)_groupSession;

@end
