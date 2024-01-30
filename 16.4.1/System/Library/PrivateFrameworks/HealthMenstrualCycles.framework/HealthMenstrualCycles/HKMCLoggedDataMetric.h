@class NSString, NSDictionary, NSNumber;

@interface HKMCLoggedDataMetric : NSObject

@property (class, readonly, nonatomic) NSString *eventName;

@property (copy, nonatomic) NSDictionary *eventPayload;
@property (readonly, nonatomic) NSString *method;
@property (retain, nonatomic) NSNumber *dayIndexLoggingOffset;

- (id)description;
- (void).cxx_destruct;
- (id)initWithMethod:(id)a0;

@end
