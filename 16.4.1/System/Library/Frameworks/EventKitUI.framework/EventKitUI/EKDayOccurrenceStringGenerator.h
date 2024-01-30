@interface EKDayOccurrenceStringGenerator : NSObject

+ (id)_attributedStatusWithState:(id)a0;
+ (double)minimumNaturalHeightForPrimaryTextUsingSmallText:(BOOL)a0 sizeClass:(long long)a1;
+ (id)_attributedLocationWithState:(id)a0;
+ (id)_defaultAttributesForState:(id)a0;
+ (double)attributedStringMinimumLineHeightUsingSmallText:(BOOL)a0 sizeClass:(long long)a1;
+ (id)_attributedTimeWithState:(id)a0;
+ (id)_attributedTitleWithState:(id)a0;
+ (double)_defaultMinimumLineHeightForState:(id)a0;
+ (double)minNaturalTextHeightForEvent:(id)a0 usingSmallText:(BOOL)a1 sizeClass:(long long)a2;
+ (double)_minimumPrimaryFontLineHeightUsingSmallText:(BOOL)a0 sizeClass:(long long)a1;

- (id)generateContentStringWithState:(id)a0;
- (id)generateTravelTimeStringWithState:(id)a0;

@end
