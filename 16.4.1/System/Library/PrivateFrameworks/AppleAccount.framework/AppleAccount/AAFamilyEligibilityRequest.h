@class ACAccount;

@interface AAFamilyEligibilityRequest : AAFamilyRequest

@property (retain, nonatomic) ACAccount *iTunesAccount;

+ (Class)responseClass;

- (id)urlRequest;
- (id)urlString;
- (void).cxx_destruct;

@end
