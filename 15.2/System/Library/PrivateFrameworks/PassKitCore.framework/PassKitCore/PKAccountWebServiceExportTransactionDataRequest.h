@class NSTimeZone, NSString, NSURL, NSDate;

@interface PKAccountWebServiceExportTransactionDataRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *fileFormat;
@property (copy, nonatomic) NSDate *beginDate;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSTimeZone *productTimeZone;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
