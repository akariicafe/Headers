@class NSNumber, NSString, NSDate;

@interface SAReminderSearch : SADomainCommand

@property (copy, nonatomic) NSNumber *completionStatus;
@property (copy, nonatomic) NSDate *dueAfter;
@property (copy, nonatomic) NSDate *dueBefore;
@property (copy, nonatomic) NSString *listName;
@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSString *timeZoneId;

+ (id)search;
+ (id)searchWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
