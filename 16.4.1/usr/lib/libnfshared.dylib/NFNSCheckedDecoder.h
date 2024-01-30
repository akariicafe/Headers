@interface NFNSCheckedDecoder : NSObject

+ (id)coder:(id)a0 decodeArrayOfClass:(Class)a1 forKey:(id)a2;
+ (id)coder:(id)a0 decodeArrayOfArrayOfClass:(Class)a1 forKey:(id)a2;
+ (id)coder:(id)a0 decodeDictOfClass:(Class)a1 forKey:(id)a2;

@end
