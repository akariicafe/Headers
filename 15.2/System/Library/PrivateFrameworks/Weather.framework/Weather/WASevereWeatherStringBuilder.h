@interface WASevereWeatherStringBuilder : NSObject

+ (id)headlineForEvents:(id)a0 shouldUppercase:(BOOL)a1;
+ (id)descriptionForEvents:(id)a0 includeLearnMore:(BOOL)a1 useSentenceCase:(BOOL)a2;
+ (id)_displayDescriptionForEvent:(id)a0 useSentenceCase:(BOOL)a1 isFirstEvent:(BOOL)a2;
+ (BOOL)_hasImportantEvent:(id)a0;
+ (id)atttributedHeadlineForEvents:(id)a0;
+ (id)headlineForEvents:(id)a0;
+ (id)atttributedDescriptionForEvents:(id)a0 includeLearnMore:(BOOL)a1 useSentenceCase:(BOOL)a2;
+ (id)_capitalizeFirstWordOfString:(id)a0;
+ (id)descriptionForEvents:(id)a0 includeLearnMore:(BOOL)a1;
+ (id)attributedImportantHeadlineForEvents:(id)a0;
+ (id)importantHeadlineForEvents:(id)a0;
+ (id)atttributedDescriptionForEvents:(id)a0 includeLearnMore:(BOOL)a1;

@end
