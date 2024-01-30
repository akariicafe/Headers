@class NSString;

@interface FAAcceptChildTransferRequest : AAFamilyRequest

@property (copy, nonatomic) NSString *requestCode;

- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (BOOL)isUserInitiated;

@end
