@class NSString, NAIdentity;

@interface HFServiceDescriptor : NSObject <NAIdentifiable>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, copy, nonatomic) id /* block */ parentServiceDescriptorGenerator;
@property (readonly, copy, nonatomic) NSString *serviceType;
@property (readonly, copy, nonatomic) NSString *serviceSubtype;
@property (readonly, nonatomic) HFServiceDescriptor *parentServiceDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithServiceType:(id)a0 serviceSubtype:(id)a1 parentServiceDescriptor:(id)a2;
- (id)initWithServiceType:(id)a0 serviceSubtype:(id)a1 parentServiceDescriptorGenerator:(id /* block */)a2;

@end
