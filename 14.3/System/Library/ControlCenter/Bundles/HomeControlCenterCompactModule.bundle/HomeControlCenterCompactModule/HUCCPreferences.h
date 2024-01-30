@interface HUCCPreferences : NSObject

@property (class, readonly, nonatomic) HUCCPreferences *sharedInstance;

@property (nonatomic) unsigned long long preferredPage;

+ (id)pageNumberByPageString;
+ (id)pageStringByPageNumber;

@end
