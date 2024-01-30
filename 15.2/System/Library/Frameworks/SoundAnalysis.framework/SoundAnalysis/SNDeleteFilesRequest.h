@class NSArray, NSString, SNFileServerInfo;

@interface SNDeleteFilesRequest : NSObject <SNTaskCreating, SNRequest>

@property (retain, nonatomic) NSArray *files;
@property (retain, nonatomic) NSString *serverBasePath;
@property (retain, nonatomic) SNFileServerInfo *serverInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id /* block */)launchTaskWithQueue:(id)a0 completionHandler:(id /* block */)a1 resultsHandler:(id /* block */)a2;
- (id)initWithFiles:(id)a0 serverBasePath:(id)a1 serverInfo:(id)a2;

@end
