@class NSString, NSArray, SNFileServerInfo;

@interface SNCopyFilesRequest : NSObject <SNTaskCreating, SNRequest> {
    SNFileServerInfo *_serverInfo;
    NSArray *_serverFilePaths;
    NSString *_serverBasePath;
    NSString *_localDestinationPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithServerInfo:(id)a0 serverBasePath:(id)a1 serverFilePaths:(id)a2 localDestinationPath:(id)a3;
- (id /* block */)launchTaskWithQueue:(id)a0 completionHandler:(id /* block */)a1 resultsHandler:(id /* block */)a2;

@end
