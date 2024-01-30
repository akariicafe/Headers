@class NSString, NSArray, NSDate, CLSActivityReport;

@interface CLSHandoutReportItem : CLSReportItem <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int type;
@property (nonatomic) int granularity;
@property (copy, nonatomic) NSString *studentID;
@property (copy, nonatomic) NSString *classID;
@property (copy, nonatomic) NSString *handoutID;
@property (copy, nonatomic) NSString *attachmentID;
@property (copy, nonatomic) NSString *reportID;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic, getter=isCompleted) BOOL completed;
@property (copy, nonatomic) CLSActivityReport *primaryActivityReport;
@property (copy, nonatomic) NSArray *additionalActivityReports;

- (void)add:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void)scalarMultiply:(double)a0;

@end
