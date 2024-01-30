@class NSString;

@interface UVBSPipeServiceServerConnection : UVBSPipeServiceConnection <UVBSServerConnection>

@property (readonly) int clientPid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
