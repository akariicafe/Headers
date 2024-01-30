@class NSString, NSArray, SNFileServerInfo;

@interface SNDeleteFilesRequest : NSObject <SNTaskCreating, SNRequest> {
    NSArray *_files;
    NSString *_serverBasePath;
    SNFileServerInfo *_serverInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFiles:(id)a0 serverBasePath:(id)a1 serverInfo:(id)a2;
- (id /* block */)launchTaskWithQueue:(id)a0 completionHandler:(id /* block */)a1 resultsHandler:(id /* block */)a2;

@end
