@class NSString, NSArray, NSDate;

@interface ASDUpdatePollMetrics : NSObject

@property (copy, nonatomic) NSDate *pollTime;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSArray *bundleIDs;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionary;

@end
