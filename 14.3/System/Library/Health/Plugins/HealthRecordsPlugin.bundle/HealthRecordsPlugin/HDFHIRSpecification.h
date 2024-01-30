@class NSArray, NSDictionary, NSSet, HDClinicalGateway;

@interface HDFHIRSpecification : NSObject <NSCopying> {
    NSArray *_resourceSchemas;
}

@property (readonly, copy, nonatomic) NSDictionary *authorizationSchemas;
@property (readonly, copy, nonatomic) NSArray *resourceSchemas;
@property (readonly, copy, nonatomic) HDClinicalGateway *gateway;
@property (readonly, copy, nonatomic) NSSet *pinset;

+ (id)specificationFromGateway:(id)a0 error:(id *)a1;
+ (id)endpointSchemasForGateway:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)shouldRefreshTokenForCredentialedTaskError:(id)a0;
- (id)errorForResourceRequest:(id)a0 response:(id)a1 data:(id)a2;
- (BOOL)shouldRetryFailedResourceTaskWithError:(id)a0;
- (id)authorizationSchemaForType:(long long)a0;
- (id)errorForAuthorizationRequest:(id)a0 response:(id)a1 data:(id)a2;
- (id)initWithGateway:(id)a0;
- (void)_parseEndpointSchemas;

@end
