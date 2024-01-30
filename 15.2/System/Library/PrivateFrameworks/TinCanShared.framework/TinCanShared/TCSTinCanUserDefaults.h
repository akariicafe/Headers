@class NSString;

@interface TCSTinCanUserDefaults : NSUserDefaults

@property (class, readonly, nonatomic) NSString *allowListKey;
@property (class, readonly, nonatomic) NSString *storeDemoAllowlistKey;
@property (class, readonly, nonatomic) NSString *suggestionExpiryReasonAllowlistedValue;

+ (id)defaults;

- (void)clearUserData;

@end
