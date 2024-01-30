@interface WFDefaultContentPermissionRequestor : NSObject <WFContentPermissionRequestor>

- (void)allowContactsAccessWithCompletionHandler:(id /* block */)a0;
- (void)allowNetworkAccessAfterPromptingForURLs:(id)a0 completionHandler:(id /* block */)a1;
- (void)allowNetworkAccessWithoutPromptingWithCompletionHandler:(id /* block */)a0;
- (void)requestUserConsentToLoadWebContentAtURL:(id)a0 completionHandler:(id /* block */)a1;

@end
