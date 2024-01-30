@interface ICSpotlightUtilities : NSObject

+ (id)stringByEscapingSearchString:(id)a0;
+ (id)queryFields;
+ (id)rankingQueryFieldsForGenericHighlighting;
+ (id)rankingQueryFieldsForSorting;
+ (id)rankingQueryFieldsForWordSpecificHighlighting;
+ (unsigned long long)rankingQueryLimit;
+ (id)userActivityPersistentIdentifierForNote:(id)a0;

@end
