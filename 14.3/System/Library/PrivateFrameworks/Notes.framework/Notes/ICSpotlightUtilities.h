@interface ICSpotlightUtilities : NSObject

+ (id)queryFields;
+ (id)rankingQueryFieldsForGenericHighlighting;
+ (id)rankingQueryFieldsForWordSpecificHighlighting;
+ (id)rankingQueryFieldsForSorting;
+ (unsigned long long)rankingQueryLimit;
+ (id)userActivityPersistentIdentifierForNote:(id)a0;
+ (id)stringByEscapingSearchString:(id)a0;

@end
