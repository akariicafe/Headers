@interface SBCXPCServiceInterface : NSObject

+ (id)serviceInterface;
+ (id)serviceName;
+ (id)serviceClientInterface;
+ (id)newListener;

- (id)newServiceConnection;

@end
