@class NSArray, NSString;

@interface WKUserContentController : NSObject <WKObject, NSSecureCoding> {
    struct ObjectStorage<WebKit::WebUserContentControllerProxy> { struct type { unsigned char __lx[88]; } data; } _userContentControllerProxy;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *_userStyleSheets;
@property (readonly, copy, nonatomic) NSArray *userScripts;
@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_addUserScriptImmediately:(id)a0;
- (void)_addScriptMessageHandler:(struct WebScriptMessageHandler { void /* function */ **x0; unsigned int x1; unsigned long long x2; struct unique_ptr<WebKit::WebScriptMessageHandler::Client, std::__1::default_delete<WebKit::WebScriptMessageHandler::Client> > { struct __compressed_pair<WebKit::WebScriptMessageHandler::Client *, std::__1::default_delete<WebKit::WebScriptMessageHandler::Client> > { struct Client *x0; } x0; } x3; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x4; struct Ref<API::ContentWorld, WTF::DumbPtrTraits<API::ContentWorld> > { struct ContentWorld *x0; } x5; } *)a0;
- (id)init;
- (void)_removeAllScriptMessageHandlersAssociatedWithUserContentWorld:(id)a0;
- (void)dealloc;
- (void)addUserScript:(id)a0;
- (void)removeContentRuleList:(id)a0;
- (void)_removeUserStyleSheet:(id)a0;
- (void)_addScriptMessageHandler:(id)a0 name:(id)a1 contentWorld:(id)a2;
- (void)addContentRuleList:(id)a0;
- (void)_removeUserContentFilter:(id)a0;
- (void)_removeUserScript:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_removeAllUserContentFilters;
- (void)removeAllContentRuleLists;
- (void)_removeAllUserScriptsAssociatedWithContentWorld:(id)a0;
- (void)_addUserContentFilter:(id)a0;
- (void)removeAllScriptMessageHandlers;
- (void)addScriptMessageHandler:(id)a0 contentWorld:(id)a1 name:(id)a2;
- (void)_addUserStyleSheet:(id)a0;
- (void)addScriptMessageHandlerWithReply:(id)a0 contentWorld:(id)a1 name:(id)a2;
- (void)removeAllUserScripts;
- (void)_removeAllUserStyleSheetsAssociatedWithContentWorld:(id)a0;
- (void)_addScriptMessageHandler:(id)a0 name:(id)a1 userContentWorld:(id)a2;
- (void)_removeScriptMessageHandlerForName:(id)a0 userContentWorld:(id)a1;
- (void)removeAllScriptMessageHandlersFromContentWorld:(id)a0;
- (void)removeScriptMessageHandlerForName:(id)a0;
- (void)removeScriptMessageHandlerForName:(id)a0 contentWorld:(id)a1;
- (void)_removeAllUserStyleSheets;
- (void)addScriptMessageHandler:(id)a0 name:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
