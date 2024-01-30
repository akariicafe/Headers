@interface YahooResponseParser : NSObject

+ (id)arrayWithDictionaryKeyPath:(id)a0 inJSONObject:(id)a1 wrapResultIfDictionary:(BOOL)a2;
+ (id)dictionaryWithDictionaryKeyPath:(id)a0 inJSONObject:(id)a1;
+ (id)objectOfClass:(Class)a0 withDictionaryKeyPath:(id)a1 inJSONObject:(id)a2;
+ (id)objectWithDictionaryKeyPath:(id)a0 inJSONObject:(id)a1;
+ (void)parseData:(id)a0 resultsHandler:(id /* block */)a1;
+ (id)parseDataSourceMapFromDataSourceDictionaries:(id)a0;
+ (void)parseExchangeDictionaries:(id)a0 parsedExchangeResult:(id /* block */)a1;
+ (void)parseStockQuoteDictionaries:(id)a0 withDataSources:(id)a1 parsedStockResult:(id /* block */)a2;

@end
