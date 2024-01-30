@class NSString, NSMutableData, NSMutableDictionary;

@interface VCSParsedLine : NSObject {
    NSString *_keyword;
    NSMutableData *_content;
    NSMutableDictionary *_params;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic) long long tokenID;
@property (nonatomic) BOOL usePalmD4Hooks;

+ (long long)tokenizeNSStringKeyword:(id)a0 withType:(unsigned long long *)a1;
+ (long long)tokenizeKeyword:(const char *)a0 withType:(unsigned long long *)a1;
+ (const struct { long long x0; unsigned long long x1; unsigned long long x2; BOOL x3; id x4; } *)lookupProperty:(long long)a0;

- (id)keyword;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)params;
- (id)content;
- (void)reset;
- (id)loadFromCString:(char *)a0 withParseState:(id)a1;
- (void)setKeywordFromCString:(char *)a0;
- (void)setContentFromCString:(char *)a0;
- (id)convertedContent;

@end
