@class NSString;

@interface UVDaemonServiceClientConnection : UVBSConnection <UVBSClientConnection, UVDaemonServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)create:(id *)a0;

@end
