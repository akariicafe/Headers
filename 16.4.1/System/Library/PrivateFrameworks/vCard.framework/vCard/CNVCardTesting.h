@interface CNVCardTesting : NSObject

+ (id)activityAlertResultWithTypes:(id)a0 sounds:(id)a1 vibrations:(id)a2;
+ (id)cardDataWithBodyLines:(id)a0 version:(id)a1 encoding:(unsigned long long)a2;
+ (id)chineseDateWithEra:(long long)a0 year:(long long)a1 month:(long long)a2 day:(long long)a3;
+ (id)complexValueWithValue:(id)a0 label:(id)a1 isPrimary:(BOOL)a2;
+ (id)emailItemWithAddress:(id)a0 label:(id)a1;
+ (id)gregorianDateWithYear:(long long)a0 month:(long long)a1 day:(long long)a2;
+ (id)instantMessagingItemWithUsername:(id)a0 service:(id)a1 label:(id)a2;
+ (id)itemWithValue:(id)a0 label:(id)a1;
+ (id)linesUsingAdapter:(id)a0;
+ (id)linesUsingAdapter:(id)a0 options:(id)a1;
+ (id)parseCardWithBodyLine:(id)a0;
+ (id)parseCardWithBodyLines:(id)a0;
+ (id)parseCardWithBodyLines:(id)a0 version:(id)a1 encoding:(unsigned long long)a2;
+ (id)parseCardWithData:(id)a0;
+ (id)parseCardWithData:(id)a0 options:(id)a1;
+ (id)resultWithProperty:(id)a0 value:(id)a1 label:(id)a2 isPrimary:(BOOL)a3;
+ (id)unknownPropertyWithName:(id)a0 line:(id)a1;
+ (id)version21DataUsingAdapter:(id)a0;
+ (BOOL)version21DataUsingAdapter:(id)a0 containsData:(id)a1;
+ (BOOL)version30CardForPerson:(id)a0 containsLine:(id)a1;
+ (BOOL)version30CardForPerson:(id)a0 containsString:(id)a1;
+ (id)version30DataUsingAdapter:(id)a0;
+ (BOOL)version30DataUsingAdapter:(id)a0 containsData:(id)a1;

@end
