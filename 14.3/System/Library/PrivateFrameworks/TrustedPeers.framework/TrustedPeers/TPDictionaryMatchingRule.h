@interface TPDictionaryMatchingRule : NSObject

+ (id)fieldExists:(id)a0;
+ (id)fieldMatch:(id)a0 fieldRegex:(id)a1;
+ (id)notMatch:(id)a0;
+ (id)andMatch:(id)a0;
+ (id)orMatch:(id)a0;
+ (id)trueMatch;
+ (id)falseMatch;

@end
