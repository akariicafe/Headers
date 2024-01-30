@class NSURLSession, NSString, WFOAuth2Credential, NSURL;

@interface WFWunderlistSessionManager : NSObject

@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) NSURLSession *session;
@property (copy, nonatomic) WFOAuth2Credential *credential;
@property (copy, nonatomic) NSString *clientId;

- (id)initWithSession:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSessionConfiguration:(id)a0;
- (void)requestPath:(id)a0 parameters:(id)a1 completionHandler:(id /* block */)a2;
- (void)getListsWithCompletionHandler:(id /* block */)a0;
- (void)createTaskOnList:(id)a0 title:(id)a1 dueDate:(id)a2 starred:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)createNoteOnTask:(id)a0 withContent:(id)a1 completionHandler:(id /* block */)a2;
- (void)createReminderOnTask:(id)a0 withDate:(id)a1 completionHandler:(id /* block */)a2;
- (void)createFileOnTask:(id)a0 withFile:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestPath:(id)a0 method:(id)a1 parameters:(id)a2 completionHandler:(id /* block */)a3;

@end
