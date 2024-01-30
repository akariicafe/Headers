@class NSString;

@interface UVAgentControlServiceClientConnection : UVBSConnection <UVBSClientConnection>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithEndpoint:(id)a0 error:(id *)a1;

- (void)activateWithInterfaceTarget:(id)a0;

@end
