@interface MapsSuggestionsCache : NSObject

+ (BOOL)saveToFilePath:(id)a0 storage:(id)a1 ETAValidUntilDate:(id)a2;
+ (BOOL)loadFromFilePath:(id)a0 storage:(id *)a1 ETAValidUntilDate:(id *)a2;

@end
