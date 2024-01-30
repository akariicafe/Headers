@class UIFont;

@interface EKDayOccurrenceViewFontUtils : NSObject

@property (class, readonly, nonatomic) UIFont *defaultOccurrenceSecondaryTextFont;

+ (id)defaultOccurrencePrimaryTextFontForSizeClass:(long long)a0;
+ (id)_primaryTextFontCache;
+ (id)defaultOccurrenceSmallPrimaryTextFontForSizeClass:(long long)a0;

@end
