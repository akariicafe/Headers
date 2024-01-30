@class ICUserIdentityProperties;

@interface ICUserCredentialResponse : NSObject

@property (copy, nonatomic) ICUserIdentityProperties *identityProperties;
@property (copy, nonatomic) ICUserIdentityProperties *iCloudIdentityProperties;

- (void).cxx_destruct;

@end
