@class NSArray, NSString;

@interface PKPaymentPassesResponse : PKPaymentWebServiceResponse

@property (copy, nonatomic) NSArray *passURLs;
@property (copy, nonatomic) NSArray *devicePassSerialNumbers;
@property (copy, nonatomic) NSString *lastUpdatedTag;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
