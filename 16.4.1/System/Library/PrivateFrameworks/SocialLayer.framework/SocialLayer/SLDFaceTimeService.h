@class NSString;

@interface SLDFaceTimeService : NSObject <SLDService, SLDFaceTimeServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteObjectProtocol;
+ (id)sharedService;

- (void)initiateTUConversationForAttributionIdentifier:(id)a0 videoEnabled:(BOOL)a1 completion:(id /* block */)a2;
- (void)refreshShareableContentMetadataInJoinedConversation;
- (id)_applicationIdentifierForConnection:(id)a0;

@end
