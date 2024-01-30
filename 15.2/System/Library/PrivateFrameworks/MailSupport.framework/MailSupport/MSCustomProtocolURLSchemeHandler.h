@class NSString;

@interface MSCustomProtocolURLSchemeHandler : NSObject <WKURLSchemeHandler>

@property (class, readonly, nonatomic) MSCustomProtocolURLSchemeHandler *sharedHandler;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 stopURLSchemeTask:(id)a1;
- (void)webView:(id)a0 startURLSchemeTask:(id)a1;

@end
