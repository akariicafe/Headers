@class NSString;

@interface SAAceCalendarSystemSetting : SADomainObject

@property (copy, nonatomic) NSString *calendarType;

+ (id)aceCalendarSystemSettingWithDictionary:(id)a0 context:(id)a1;
+ (id)aceCalendarSystemSetting;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
