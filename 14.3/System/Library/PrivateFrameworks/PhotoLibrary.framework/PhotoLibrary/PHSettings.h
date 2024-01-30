@class NSString;

@interface PHSettings : _UISettings

@property (class, copy, nonatomic) NSString *suiteName;

+ (id)sharedSettings;
+ (id)_userDefaults;
+ (id)_defaultsKey;
+ (id)createSharedSettings;
+ (id)_signatureDictionary;

- (id)parentSettings;
- (void)save;

@end
