@interface CNVCardLineSerializationStrategy : NSObject

+ (id)version21StrategyWithStringStorage:(id)a0 encodings:(id)a1;
+ (id)version30StrategyWithStringStorage:(id)a0;
+ (id)version21StrategyWithDataStorage:(id)a0 encodings:(id)a1;
+ (id)version30StrategyWithDataStorage:(id)a0;

@end
