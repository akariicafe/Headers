@class NSString, NSArray, NSDate;

@interface ASDUpdatePollMetrics : NSObject

@property (copy, nonatomic) NSDate *pollTime;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSArray *bundleIDs;

- (void).cxx_destruct;
- (id)dictionary;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
