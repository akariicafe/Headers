@class NSURLSession, NSString, NSDateFormatter, NSURL;

@interface WFPinboardSessionManager : NSObject

@property (readonly, nonatomic) NSDateFormatter *dateTimeFormatter;
@property (readonly, nonatomic) NSURLSession *session;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *apiToken;
@property (readonly, nonatomic) NSURL *baseURL;

- (id)init;
- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (id)initWithSessionConfiguration:(id)a0;
- (void)getModifiedDateWithCompletion:(id /* block */)a0;
- (void)addBookmark:(id)a0 withTitle:(id)a1 parameters:(id)a2 completion:(id /* block */)a3;
- (id)authenticatedTaskWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)getBookmarksWithTags:(id)a0 limit:(unsigned long long)a1 completion:(id /* block */)a2;

@end
