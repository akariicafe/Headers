@class NSArray;

@interface DMFFetchStreamEventsResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *eventStatuses;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
