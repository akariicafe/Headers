@class NSNumber, NSString;

@interface FAFamilyMemberDetailsUIRequest : FAFamilyRequest

@property (copy, nonatomic) NSNumber *memberDSID;
@property (copy, nonatomic) NSString *memberEmail;

- (BOOL)isUserInitiated;
- (id)_queryString;
- (void).cxx_destruct;
- (id)_endpoint;
- (void)URLRequestWithCompletion:(id /* block */)a0;

@end
