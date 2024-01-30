@class NSArray, NSString;

@interface PKPaymentPassesResponse : PKPaymentWebServiceResponse

@property (copy, nonatomic) NSArray *passURLs;
@property (copy, nonatomic) NSArray *devicePassSerialNumbers;
@property (copy, nonatomic) NSString *lastUpdatedTag;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
