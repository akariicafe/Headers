@class NSURLSession, NSString, NSURL, NSNumber;

@interface WFWordPressSessionManager : NSObject

@property (readonly, nonatomic) NSURLSession *session;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSURL *endpointURL;
@property (copy, nonatomic) NSNumber *blogId;

- (void).cxx_destruct;
- (id)init;
- (void)sendRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithSessionConfiguration:(id)a0;
- (void)getBlogsWithCompletionHandler:(id /* block */)a0;
- (void)getTermsForTaxonomy:(id)a0 completionHandler:(id /* block */)a1;
- (void)getPostTypesWithCompletionHandler:(id /* block */)a0;
- (void)getPostFormatsWithCompletionHandler:(id /* block */)a0;
- (void)getPostStatusesWithCompletionHandler:(id /* block */)a0;
- (void)getPageTemplatesWithCompletionHandler:(id /* block */)a0;
- (void)createPostWithTitle:(id)a0 content:(id)a1 type:(id)a2 date:(id)a3 format:(id)a4 status:(id)a5 allowingComments:(BOOL)a6 name:(id)a7 excerpt:(id)a8 template:(id)a9 tags:(id)a10 categories:(id)a11 thumbnailId:(id)a12 customFields:(id)a13 completionHandler:(id /* block */)a14;
- (void)createPostWithContent:(id)a0 completionHandler:(id /* block */)a1;
- (void)getPost:(id)a0 completionHandler:(id /* block */)a1;
- (void)uploadFile:(id)a0 completionHandler:(id /* block */)a1;
- (void)sendRequestWithMethod:(id)a0 parameters:(id)a1 completionHandler:(id /* block */)a2;

@end
