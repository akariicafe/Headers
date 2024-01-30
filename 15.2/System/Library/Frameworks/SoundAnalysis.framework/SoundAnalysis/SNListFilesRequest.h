@class NSString, SNFileServerInfo;

@interface SNListFilesRequest : NSObject <SNTaskCreating, SNRequest>

@property (retain, nonatomic) SNFileServerInfo *serverInfo;
@property (retain, nonatomic) NSString *queryPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id /* block */)launchTaskWithQueue:(id)a0 completionHandler:(id /* block */)a1 resultsHandler:(id /* block */)a2;
- (id)initWithServerInfo:(id)a0 queryPath:(id)a1;

@end
