@class NSArray, NSString;

@interface WKUserContentController : NSObject <WKObject, NSSecureCoding> {
    struct ObjectStorage<WebKit::WebUserContentControllerProxy> { struct type { unsigned char __lx[112]; } data; } _userContentControllerProxy;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *_userStyleSheets;
@property (readonly, copy, nonatomic) NSArray *userScripts;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)init;
- (void)_addUserStyleSheet:(id)a0;
- (void)removeContentRuleList:(id)a0;
- (void)addScriptMessageHandler:(id)a0 name:(id)a1;
- (void)_addContentRuleList:(id)a0 extensionBaseURL:(id)a1;
- (void)_addScriptMessageHandler:(void *)a0;
- (void)_addScriptMessageHandler:(id)a0 name:(id)a1 contentWorld:(id)a2;
- (void)_addScriptMessageHandler:(id)a0 name:(id)a1 userContentWorld:(id)a2;
- (void)_addUserContentFilter:(id)a0;
- (void)_addUserScriptImmediately:(id)a0;
- (void)_removeAllScriptMessageHandlersAssociatedWithUserContentWorld:(id)a0;
- (void)_removeAllUserContentFilters;
- (void)_removeAllUserScriptsAssociatedWithContentWorld:(id)a0;
- (void)_removeAllUserStyleSheets;
- (void)_removeAllUserStyleSheetsAssociatedWithContentWorld:(id)a0;
- (void)_removeScriptMessageHandlerForName:(id)a0 userContentWorld:(id)a1;
- (void)_removeUserContentFilter:(id)a0;
- (void)_removeUserScript:(id)a0;
- (void)_removeUserStyleSheet:(id)a0;
- (void)addContentRuleList:(id)a0;
- (void)addScriptMessageHandler:(id)a0 contentWorld:(id)a1 name:(id)a2;
- (void)addScriptMessageHandlerWithReply:(id)a0 contentWorld:(id)a1 name:(id)a2;
- (void)addUserScript:(id)a0;
- (void)removeAllContentRuleLists;
- (void)removeAllScriptMessageHandlers;
- (void)removeAllScriptMessageHandlersFromContentWorld:(id)a0;
- (void)removeAllUserScripts;
- (void)removeScriptMessageHandlerForName:(id)a0;
- (void)removeScriptMessageHandlerForName:(id)a0 contentWorld:(id)a1;

@end
