@class NSString, NSArray, NSDate, NSNumber;

@interface SACalendarEventSearch : SADomainCommand

@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSNumber *limit;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *notes;
@property (copy, nonatomic) NSArray *participants;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSString *timeZoneId;
@property (copy, nonatomic) NSString *title;

+ (id)eventSearch;
+ (id)eventSearchWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
