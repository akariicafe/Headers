@class NSXPCConnection;
@protocol AUPBInspecting;

@interface AUPBClientConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcconnection;
@property (retain, nonatomic) id<AUPBInspecting> proxyInterface;

@end
