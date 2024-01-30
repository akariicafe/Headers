@interface TPDictionaryMatchingRule : NSObject

+ (id)andMatch:(id)a0;
+ (id)trueMatch;
+ (id)falseMatch;
+ (id)notMatch:(id)a0;
+ (id)orMatch:(id)a0;
+ (id)fieldMatch:(id)a0 fieldRegex:(id)a1;
+ (id)fieldExists:(id)a0;

@end
