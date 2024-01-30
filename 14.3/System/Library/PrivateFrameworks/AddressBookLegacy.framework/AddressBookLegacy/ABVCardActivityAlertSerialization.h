@interface ABVCardActivityAlertSerialization : NSObject

+ (id)stringWithType:(id)a0 info:(id)a1;
+ (void)parseString:(id)a0 intoTypeAndInfo:(id /* block */)a1;
+ (id)dictionaryWithType:(id)a0 info:(id)a1;
+ (id)activityAlertWithString:(id)a0;
+ (id)typeFromDictionary:(id)a0;
+ (id)infoFromDictionary:(id)a0;

@end
