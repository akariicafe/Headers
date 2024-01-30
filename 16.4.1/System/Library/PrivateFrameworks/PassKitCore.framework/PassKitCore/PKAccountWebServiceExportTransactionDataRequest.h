@class NSTimeZone, NSString, NSURL, NSDate;

@interface PKAccountWebServiceExportTransactionDataRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *fileFormat;
@property (copy, nonatomic) NSDate *beginDate;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSString *statementIdentifier;
@property (copy, nonatomic) NSTimeZone *productTimeZone;

- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void).cxx_destruct;

@end
