@class ACAccount;

@interface AAFamilyEligibilityRequest : AAFamilyRequest

@property (retain, nonatomic) ACAccount *iTunesAccount;

+ (Class)responseClass;

- (id)urlString;
- (void).cxx_destruct;
- (id)urlRequest;

@end
