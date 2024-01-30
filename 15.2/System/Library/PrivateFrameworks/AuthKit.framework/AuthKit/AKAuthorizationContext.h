@class NSString, AKAuthorizationScopesUserSelection, NSDictionary, AKDevice, AKAuthorizationRequest;

@interface AKAuthorizationContext : NSObject <AKAuthenticationContext, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL _hasApplicationMetaData;
@property (copy, nonatomic) NSString *teamID;
@property (copy, nonatomic) NSString *clientID;
@property (readonly, copy, nonatomic) AKAuthorizationRequest *request;
@property (retain, nonatomic) AKAuthorizationScopesUserSelection *userSelection;
@property (copy, nonatomic) NSString *realUserVerificationData;
@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) long long serviceType;
@property (copy, nonatomic, setter=_setProxiedAppName:) NSString *_proxiedAppName;
@property (copy, nonatomic) NSDictionary *appProvidedData;
@property (copy, nonatomic) NSString *appProvidedContext;
@property (copy, nonatomic) AKDevice *proxiedDevice;
@property (copy, nonatomic) AKDevice *companionDevice;
@property (nonatomic) long long authenticationMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRequest:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
