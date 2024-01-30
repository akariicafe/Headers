@class NSMutableDictionary, NSRegularExpression, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface TTSRegexHelper : NSObject {
    struct vector<boost::basic_regex<char>, std::allocator<boost::basic_regex<char>>> { void *__begin_; void *__end_; struct __compressed_pair<boost::basic_regex<char> *, std::allocator<boost::basic_regex<char>>> { void *__value_; } __end_cap_; } _boostRegexes;
    NSMutableArray *_nsRegexes;
    NSMutableSet *_duplicateChecker;
    NSObject<OS_dispatch_queue> *_ttsRegexQueue;
    NSMutableDictionary *_nsRules;
    NSMutableDictionary *_boostRules;
    NSRegularExpression *_escapeStripper;
}

@property (nonatomic) int regexStyle;
@property (nonatomic) BOOL skipLuthorRules;

+ (id)sharedInstance;

- (id).cxx_construct;
- (id)init;
- (id)regexRules;
- (void).cxx_destruct;
- (void)addRules:(id)a0;
- (void)resetStoredRules;
- (void)_addNSRule:(id)a0 ruleApplication:(id)a1 caseInsensitive:(BOOL)a2;
- (void)_addRules:(id)a0;
- (id)_boostGetReplacementsForText:(id)a0;
- (id)_boostProcessMatches:(id)a0 text:(id)a1 logging:(id)a2;
- (id)_calculatedUTF8Offsets:(id)a0;
- (id)_nsGetReplacementsForText:(id)a0;
- (id)_processReplacementStringForSpecialCharacters:(id)a0;
- (id)applyRulesForText:(id)a0;
- (id)boostRules;
- (BOOL)hasStoredRules;

@end
