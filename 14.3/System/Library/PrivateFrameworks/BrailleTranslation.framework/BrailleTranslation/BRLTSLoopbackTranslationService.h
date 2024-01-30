@class NSXPCListener, NSString;

@interface BRLTSLoopbackTranslationService : BRLTSTranslationService <NSXPCListenerDelegate>

@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
