@class NSString, NSMapTable;

@interface WBSWebExtensionURLSchemeHandler : NSObject <WKURLSchemeHandler> {
    NSMapTable *_fileLoadOperations;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)webView:(id)a0 stopURLSchemeTask:(id)a1;
- (void)webView:(id)a0 startURLSchemeTask:(id)a1;

@end
