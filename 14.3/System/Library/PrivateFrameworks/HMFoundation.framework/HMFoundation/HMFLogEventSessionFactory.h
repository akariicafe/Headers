@interface HMFLogEventSessionFactory : NSObject

+ (id)sessionWithUUID:(id)a0 serviceName:(id)a1 parent:(id)a2;
+ (id)sessionWithUUID:(id)a0 serviceName:(id)a1 rootUUID:(id)a2;
+ (id)backendWithServiceName:(id)a0;

@end
