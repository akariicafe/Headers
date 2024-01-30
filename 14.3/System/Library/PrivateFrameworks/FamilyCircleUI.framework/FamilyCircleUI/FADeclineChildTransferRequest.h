@class NSString;

@interface FADeclineChildTransferRequest : AAFamilyRequest

@property (copy, nonatomic) NSString *requestCode;

- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (BOOL)isUserInitiated;

@end
