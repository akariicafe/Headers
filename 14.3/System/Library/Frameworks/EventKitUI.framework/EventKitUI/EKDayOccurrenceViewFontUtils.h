@class UIFont;

@interface EKDayOccurrenceViewFontUtils : NSObject

@property (class, readonly, nonatomic) UIFont *defaultOccurrenceSecondaryTextFont;

+ (id)defaultOccurrenceSmallPrimaryTextFontForSizeClass:(long long)a0;
+ (id)defaultOccurrencePrimaryTextFontForSizeClass:(long long)a0;
+ (id)_primaryTextFontCache;

@end
