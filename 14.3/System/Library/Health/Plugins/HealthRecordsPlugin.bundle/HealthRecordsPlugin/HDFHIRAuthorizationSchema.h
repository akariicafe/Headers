@interface HDFHIRAuthorizationSchema : HDFHIREndpointSchema

@property (readonly, nonatomic) long long authorizationEndpointType;

+ (BOOL)validateName:(id)a0 error:(out id *)a1;

- (id)name;

@end
