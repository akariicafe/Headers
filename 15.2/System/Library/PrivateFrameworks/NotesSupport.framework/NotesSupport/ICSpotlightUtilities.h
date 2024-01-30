@interface ICSpotlightUtilities : NSObject

+ (id)stringByEscapingSearchString:(id)a0;
+ (id)userActivityPersistentIdentifierForNote:(id)a0;
+ (id)rankingQueryFieldsForGenericHighlighting;
+ (id)rankingQueryFieldsForWordSpecificHighlighting;
+ (id)rankingQueryFieldsForSorting;
+ (unsigned long long)rankingQueryLimit;
+ (id)queryFields;

@end
