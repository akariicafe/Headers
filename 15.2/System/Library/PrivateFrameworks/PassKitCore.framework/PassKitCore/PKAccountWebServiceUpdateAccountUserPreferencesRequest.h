@class NSString, NSURL, PKAccountUserPreferences;

@interface PKAccountWebServiceUpdateAccountUserPreferencesRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *accountUserAltDSID;
@property (retain, nonatomic) PKAccountUserPreferences *accountUserPreferences;
@property (nonatomic) unsigned long long accountUserAccessLevel;
@property (retain, nonatomic) NSURL *baseURL;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
