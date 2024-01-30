@class NSString;

@interface FADeclineChildTransferRequest : AAFamilyRequest

@property (copy, nonatomic) NSString *requestCode;

- (BOOL)isUserInitiated;
- (id)urlRequest;
- (id)urlString;
- (void).cxx_destruct;

@end
