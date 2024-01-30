@class ICUserIdentityProperties;

@interface MPCModelGenericAVItemUserIdentityPropertySet : NSObject

@property (copy, nonatomic) ICUserIdentityProperties *identityProperties;
@property (copy, nonatomic) ICUserIdentityProperties *delegatedIdentityProperties;

- (void).cxx_destruct;
- (id)initWithRequestContext:(id)a0 error:(id *)a1;

@end
