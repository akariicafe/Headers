@interface MapsSuggestionsCache : NSObject

+ (BOOL)loadFromFilePath:(id)a0 storage:(id *)a1 ETAValidUntilDate:(id *)a2;
+ (BOOL)saveToFilePath:(id)a0 storage:(id)a1 ETAValidUntilDate:(id)a2;

@end
