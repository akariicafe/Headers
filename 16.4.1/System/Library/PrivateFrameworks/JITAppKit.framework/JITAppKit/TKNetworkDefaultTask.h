@class NSString, MCLURLDataLoaderTask;

@interface TKNetworkDefaultTask : NSObject <TKNetworkTask> {
    MCLURLDataLoaderTask *_task;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTask:(id)a0;
- (void)cancel;
- (void).cxx_destruct;

@end
