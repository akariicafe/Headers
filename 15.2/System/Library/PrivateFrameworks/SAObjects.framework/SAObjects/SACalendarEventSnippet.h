@class NSArray, NSString, NSDate;

@interface SACalendarEventSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *events;
@property (copy, nonatomic) NSDate *snippetEndDate;
@property (copy, nonatomic) NSDate *snippetStartDate;
@property (copy, nonatomic) NSString *timeZoneId;

+ (id)eventSnippet;
+ (id)eventSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
