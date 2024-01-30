@class NSString, AKAuthorizationScopesUserSelection, NSDictionary, AKDevice, AKAuthorizationRequest;

@interface AKAuthorizationContext : NSObject <AKAuthenticationContext, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL _hasApplicationMetaData;
@property (nonatomic) BOOL _clientAuthenticatedExternallyWithPassword;
@property (copy, nonatomic) NSString *_externalAuthToken;
@property (copy, nonatomic) NSString *teamID;
@property (copy, nonatomic) NSString *clientID;
@property (readonly, copy, nonatomic) AKAuthorizationRequest *request;
@property (retain, nonatomic) AKAuthorizationScopesUserSelection *userSelection;
@property (copy, nonatomic) NSString *realUserVerificationData;
@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) long long serviceType;
@property (nonatomic) unsigned long long authenticationType;
@property (nonatomic) unsigned long long authenticationMode;
@property (copy, nonatomic, setter=_setProxiedAppName:) NSString *_proxiedAppName;
@property (copy, nonatomic) NSDictionary *appProvidedData;
@property (copy, nonatomic) NSString *appProvidedContext;
@property (copy, nonatomic) AKDevice *proxiedDevice;
@property (copy, nonatomic) AKDevice *companionDevice;
@property (nonatomic) BOOL cliMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithRequest:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
