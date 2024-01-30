@class NSNumber, NSString;

@interface FAFamilyMemberDetailsUIRequest : FAFamilyRequest

@property (copy, nonatomic) NSNumber *memberDSID;
@property (copy, nonatomic) NSString *memberEmail;

- (id)_endpoint;
- (void).cxx_destruct;
- (BOOL)isUserInitiated;
- (id)_queryString;
- (void)URLRequestWithCompletion:(id /* block */)a0;

@end
