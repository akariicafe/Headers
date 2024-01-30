@interface SGRealtimeSuggestionMock : NSObject

+ (id)parseJson:(id)a0 error:(id *)a1;
+ (id)loadFromFile:(id)a0 error:(id *)a1;
+ (id)parseData:(id)a0 error:(id *)a1;
+ (id)contactDetailsFromData:(id)a0 block:(id /* block */)a1;
+ (id)dateFromObject:(id)a0 error:(id *)a1;
+ (id)createSuggestion:(id)a0 error:(id *)a1;
+ (BOOL)isMockRecordId:(id)a0;
+ (id)createRealtimeContact:(id)a0 error:(id *)a1;
+ (id)createRealtimeEvent:(id)a0 error:(id *)a1;
+ (id)createRealtimeReminder:(id)a0 error:(id *)a1;
+ (BOOL)isMockSuggestion:(id)a0;
+ (id)originFromRecordId:(id)a0;
+ (id)contactMatchesWithContact:(id)a0;
+ (void)cleanupAfterMockSuggestion:(id)a0;

@end
