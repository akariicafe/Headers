@interface TPDictionaryMatchingRule : NSObject

+ (id)fieldMatch:(id)a0 fieldRegex:(id)a1;
+ (id)andMatch:(id)a0;
+ (id)fieldExists:(id)a0;
+ (id)orMatch:(id)a0;
+ (id)notMatch:(id)a0;
+ (id)falseMatch;
+ (id)trueMatch;

@end
