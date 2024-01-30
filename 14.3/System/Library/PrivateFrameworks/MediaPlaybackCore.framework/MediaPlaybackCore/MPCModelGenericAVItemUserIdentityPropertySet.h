@class ICUserIdentityProperties;

@interface MPCModelGenericAVItemUserIdentityPropertySet : NSObject

@property (copy, nonatomic) ICUserIdentityProperties *identityProperties;
@property (copy, nonatomic) ICUserIdentityProperties *delegatedIdentityProperties;

+ (void)identityPropertySetFromRequestContext:(id)a0 completion:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithIdentityProperties:(id)a0 delegatedIdentityProperties:(id)a1;

@end
