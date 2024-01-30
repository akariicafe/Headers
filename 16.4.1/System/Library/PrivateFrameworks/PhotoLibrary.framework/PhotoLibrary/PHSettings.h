@class NSString;

@interface PHSettings : _UISettings

@property (class, copy, nonatomic) NSString *suiteName;

+ (id)sharedSettings;
+ (id)_userDefaults;
+ (id)_defaultsKey;
+ (id)_signatureDictionary;
+ (id)createSharedSettings;

- (id)parentSettings;
- (void)save;

@end
