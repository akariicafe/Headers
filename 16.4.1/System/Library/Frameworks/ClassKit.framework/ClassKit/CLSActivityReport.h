@class NSString, NSArray, CLSActivityReportItem, CLSAggregatedValue;

@interface CLSActivityReport : CLSReportItem <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long contextType;
@property (copy, nonatomic) NSString *contextTopic;
@property (copy, nonatomic) NSString *contextTitle;
@property (copy, nonatomic) NSString *contextAppBundleIdentifier;
@property (copy, nonatomic) NSString *contextID;
@property (copy, nonatomic) CLSAggregatedValue *time;
@property (copy, nonatomic) CLSAggregatedValue *progress;
@property (copy, nonatomic) CLSActivityReportItem *primaryReportItem;
@property (copy, nonatomic) NSArray *additionalReportItems;
@property (copy, nonatomic) NSString *contextStableObjectID;
@property (nonatomic) int handoutAttachmentType;
@property (copy, nonatomic) NSString *handoutAuthorizedObjectID;

- (void)add:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)scalarMultiply:(double)a0;

@end
