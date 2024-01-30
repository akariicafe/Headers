@class NSString;

@interface SAAceCalendarSystemSetting : SADomainObject

@property (copy, nonatomic) NSString *calendarType;

+ (id)aceCalendarSystemSetting;
+ (id)aceCalendarSystemSettingWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
