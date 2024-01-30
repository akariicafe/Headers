@interface CNMECARDParser : NSObject

+ (id)parseString:(id)a0 resultFactory:(id)a1 error:(id *)a2;
+ (void)enumerateTagsInString:(id)a0 usingBlock:(id /* block */)a1;

@end
