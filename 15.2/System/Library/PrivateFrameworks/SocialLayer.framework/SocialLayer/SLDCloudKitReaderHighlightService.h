@class NSString;

@interface SLDCloudKitReaderHighlightService : NSObject <SLDService, SLDCloudKitReaderHighlightService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedService;
+ (id)remoteObjectProtocol;
+ (void)setupInterface:(id)a0;

- (void)receivedConnection:(id)a0;
- (void)lostConnection:(id)a0;
- (void)addApplicationIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)syncableSocialHighlightsForApplicationIdentifier:(id)a0 reply:(id /* block */)a1;
- (id)applicationIdentifierForCurrentConnection;

@end
