@interface PGHighlightsTitleSpecFactory : NSObject

+ (id)specCollectionForMeaningLabel:(id)a0 allowAllCities:(BOOL)a1;
+ (id)specPoolForPublicEventWithBusiness;
+ (id)specPoolForPublicEvent;
+ (id)specPoolForBusinessItem;
+ (id)specPoolForGenericLocation:(BOOL)a0;
+ (id)titleSpecForGenericLocation:(BOOL)a0;
+ (id)specPoolForAOILocation;
+ (id)specPoolsForBirthdayIncludingLocationIfPossible:(BOOL)a0 allowAllCities:(BOOL)a1;
+ (id)specPoolsForHolidayEventIncludingLocationIfPossible:(BOOL)a0 allowAllCities:(BOOL)a1;
+ (id)titleSpecForHolidayEventIncludingLocationIfPossible:(BOOL)a0;
+ (id)orderedHighlightTitleSpecTypesForMeaningLabel:(id)a0;

@end
