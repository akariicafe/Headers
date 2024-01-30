@class NSXPCInterface;

@interface CASAuthenticationServiceInterface : NSObject

@property (class, readonly, nonatomic) NSXPCInterface *clientInterface;
@property (class, readonly, nonatomic) NSXPCInterface *daemonInterface;

@end
