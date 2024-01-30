@class NSDate, NSString, CRKEventLog;

@interface CRKFetchLogEventsResultObject : CATTaskResultObject

@property (retain, nonatomic) CRKEventLog *eventLog;
@property (retain, nonatomic) NSDate *currentDate;
@property (copy, nonatomic) NSString *sessionToken;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
