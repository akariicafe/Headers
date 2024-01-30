@class NSArray, NSString, NSURL, NSNumber;

@interface SAAlarmSearch : SADomainCommand

@property (copy, nonatomic) NSNumber *enabled;
@property (copy, nonatomic) NSArray *frequency;
@property (copy, nonatomic) NSNumber *hour;
@property (copy, nonatomic) NSURL *identifier;
@property (copy, nonatomic) NSNumber *includesSleepAlarms;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *minute;

+ (id)search;
+ (id)searchWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
