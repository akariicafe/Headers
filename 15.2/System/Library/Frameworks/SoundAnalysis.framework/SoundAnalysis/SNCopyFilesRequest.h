@class NSArray, NSString, SNFileServerInfo;

@interface SNCopyFilesRequest : NSObject <SNTaskCreating, SNRequest>

@property (retain, nonatomic) SNFileServerInfo *serverInfo;
@property (retain, nonatomic) NSArray *serverFilePaths;
@property (retain, nonatomic) NSString *serverBasePath;
@property (retain, nonatomic) NSString *localDestinationPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id /* block */)launchTaskWithQueue:(id)a0 completionHandler:(id /* block */)a1 resultsHandler:(id /* block */)a2;
- (id)initWithServerInfo:(id)a0 serverBasePath:(id)a1 serverFilePaths:(id)a2 localDestinationPath:(id)a3;

@end
