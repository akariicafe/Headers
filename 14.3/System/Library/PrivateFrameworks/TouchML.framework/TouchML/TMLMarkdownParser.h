@class NSArray, NSMutableDictionary, NSScanner;

@interface TMLMarkdownParser : NSObject {
    NSArray *_rules;
    NSScanner *_scanner;
    NSMutableDictionary *_attributes;
    NSMutableDictionary *_tag;
    NSArray *_regex;
    NSArray *_extraRules;
    NSArray *_extraRegex;
}

+ (id)parse:(id)a0 tags:(id *)a1 withRules:(id)a2;
+ (id)unescapeString:(id)a0;
+ (id)regexFromRules:(id)a0;
+ (id)stringOfTagType:(id)a0 andCount:(unsigned long long)a1;
+ (id)preProcessString:(id)a0;
+ (id)postProcessString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)replacestring:(id)a0 usingRule:(id)a1 atIndex:(unsigned long long)a2 additonalRules:(BOOL)a3;
- (BOOL)isListTagOpen:(id)a0;
- (id)tagFromType:(int)a0;
- (id)parse:(id)a0 tags:(id *)a1;

@end
