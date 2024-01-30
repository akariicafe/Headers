@interface SPProtoSerializer : NSObject

+ (id)spPlistWithDictionary:(id)a0;
+ (id)dataWithObject:(id)a0;
+ (id)objectWithData:(id)a0;
+ (id)dictionaryWithSPPlist:(id)a0;
+ (id)spPlistWithArray:(id)a0;
+ (id)protoSPObjectWithString:(id)a0 forKey:(id)a1;
+ (id)protoSPObjectWithNumber:(id)a0 forKey:(id)a1;
+ (id)protoSPObjectWithData:(id)a0 forKey:(id)a1;
+ (id)protoSPObjectWithDictionary:(id)a0 forKey:(id)a1;
+ (id)protoSPObjectWithArray:(id)a0 forKey:(id)a1;
+ (id)protoSPObjectWithObject:(id)a0 forKey:(id)a1;
+ (id)numberWithSPProtoSockPuppetObject:(id)a0;
+ (id)arrayWithSPPlist:(id)a0;

@end
