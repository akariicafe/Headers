@class NSString, SNFileServerInfo;

@interface SNListFilesRequest : NSObject <SNTaskCreating, SNRequest> {
    SNFileServerInfo *_serverInfo;
    NSString *_queryPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithServerInfo:(id)a0 queryPath:(id)a1;
- (id /* block */)launchTaskWithQueue:(id)a0 completionHandler:(id /* block */)a1 resultsHandler:(id /* block */)a2;

@end
