@interface SBCXPCServiceInterface : NSObject

+ (id)serviceName;
+ (id)serviceInterface;
+ (id)newListener;
+ (id)serviceClientInterface;

- (id)newServiceConnection;

@end
