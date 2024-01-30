@class NSMutableDictionary, NSMapTable, NSString, WKWebViewConfiguration;
@protocol SWLogger;

@interface SWURLSchemeHandlerManager : NSObject <SWURLSchemeHandlerManager>

@property (readonly, weak, nonatomic) WKWebViewConfiguration *configuration;
@property (readonly, nonatomic) id<SWLogger> logger;
@property (readonly, nonatomic) NSMutableDictionary *factories;
@property (readonly, nonatomic) NSMapTable *handlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 stopURLSchemeTask:(id)a1;
- (void)webView:(id)a0 startURLSchemeTask:(id)a1;
- (void).cxx_destruct;
- (void)registerFactory:(id)a0 forScheme:(id)a1;
- (id)initWithConfiguration:(id)a0 logger:(id)a1;

@end
