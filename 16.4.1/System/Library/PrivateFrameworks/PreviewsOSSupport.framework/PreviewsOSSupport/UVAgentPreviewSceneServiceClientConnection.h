@class NSString;

@interface UVAgentPreviewSceneServiceClientConnection : UVBSConnection <UVBSClientConnection>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithEndpoint:(id)a0 forSceneIdentifier:(id)a1 error:(id *)a2;

- (void)activateWithInterfaceTarget:(id)a0;

@end
