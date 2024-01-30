@class NSString;

@interface DNDAppConfigurationPredicateMO : DNDPerAppSettingsMO

@property (copy, nonatomic) NSString *predicateFormat;

+ (id)fetchRequest;

- (Class)dnd_settingsType;

@end
