@class NSString, NSDate;

@interface SACalendarRecurrence : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long endCount;
@property (copy, nonatomic) NSDate *endDate;
@property (nonatomic) int frequency;
@property (nonatomic) long long interval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recurrenceWithDictionary:(id)a0 context:(id)a1;
+ (id)recurrence;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
