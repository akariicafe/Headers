@class NSString, AAFXPCSession;

@interface AADaemonController : NSObject <AAFXPCSessionDelegate, AADaemonProtocol>

@property (retain, nonatomic) AAFXPCSession *remoteService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
