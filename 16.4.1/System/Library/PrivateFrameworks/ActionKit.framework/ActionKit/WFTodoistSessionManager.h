@class NSURLSession, NSString, WFOAuth2Credential, NSURL;

@interface WFTodoistSessionManager : NSObject

@property (copy, nonatomic) NSString *syncToken;
@property (readonly, nonatomic) NSURLSession *session;
@property (copy, nonatomic) WFOAuth2Credential *credential;
@property (readonly, copy, nonatomic) NSURL *baseURL;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSessionConfiguration:(id)a0;
- (void)createFileOnItemWithId:(long long)a0 withFile:(id)a1 completionHandler:(id /* block */)a2;
- (void)createItemInProject:(id)a0 content:(id)a1 dueDateString:(id)a2 reminderDateString:(id)a3 reminderService:(long long)a4 priority:(long long)a5 note:(id)a6 completionHandler:(id /* block */)a7;
- (void)getProjectsWithCompletionHandler:(id /* block */)a0;
- (void)requestWithCommands:(id)a0 resourceTypes:(id)a1 completionHandler:(id /* block */)a2;

@end
