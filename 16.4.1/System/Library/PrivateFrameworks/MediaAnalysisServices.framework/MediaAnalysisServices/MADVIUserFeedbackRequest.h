@class NSData, NSString;

@interface MADVIUserFeedbackRequest : MADRequest

@property (readonly, nonatomic) NSData *userFeedbackPayload;
@property (readonly, nonatomic) NSData *sfReportData;
@property (readonly, nonatomic) NSString *reportIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithUserFeedbackPayload:(id)a0 sfReportData:(id)a1 reportIdentifier:(id)a2;
- (id)initWithPayload:(id)a0 andReportIdentifier:(id)a1;

@end
