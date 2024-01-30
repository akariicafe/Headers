@class NSString, NSArray, NSDictionary, NSDate, NSNumber, NSMutableArray;

@interface WLKSchedule : NSObject {
    NSMutableArray *_mutableEvents;
    NSDictionary *_dictionary;
}

@property (readonly, copy, nonatomic) NSString *serviceID;
@property (readonly, copy, nonatomic) NSString *externalServiceID;
@property (readonly, copy, nonatomic) NSString *channelID;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSNumber *cleanupTime;
@property (readonly, copy, nonatomic) NSDate *earliestEventDate;
@property (readonly, copy, nonatomic) NSDate *latestEventDate;
@property (readonly, copy, nonatomic) NSArray *events;

- (void)prune;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (BOOL)_isDate:(id)a0 containedByDate:(id)a1 andDate:(id)a2;
- (id)eventForDate:(id)a0;
- (id)adjacentEventsForDate:(id)a0 fuzziness:(double)a1;
- (id)eventAfterDate:(id)a0;

@end
