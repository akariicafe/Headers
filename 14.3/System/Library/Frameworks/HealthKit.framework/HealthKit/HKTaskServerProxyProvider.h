@class NSUUID, NSString, NSURL, HKTaskConfiguration;

@interface HKTaskServerProxyProvider : HKProxyProvider

@property (readonly, copy, nonatomic) NSUUID *taskUUID;
@property (readonly, copy, nonatomic) NSString *taskIdentifier;
@property (copy, nonatomic) NSURL *pluginURL;
@property (copy) HKTaskConfiguration *taskConfiguration;

- (void).cxx_destruct;
- (id)initWithHealthStore:(id)a0 taskIdentifier:(id)a1 exportedObject:(id)a2 taskUUID:(id)a3;
- (id)initWithHealthStore:(id)a0 taskIdentifier:(id)a1 exportedObject:(id)a2 exportedInterface:(id)a3 remoteInterface:(id)a4 taskUUID:(id)a5;
- (void)fetchProxyServiceEndpointForIdentifier:(id)a0 healthStore:(id)a1 endpointHandler:(id /* block */)a2 errorHandler:(id /* block */)a3;

@end
