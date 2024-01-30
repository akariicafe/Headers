@class NSMutableDictionary, NSRegularExpression, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface TTSRegexHelper : NSObject {
    struct vector<boost::basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >, std::__1::allocator<boost::basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > > > > { struct basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > > *__begin_; struct basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > > *__end_; struct __compressed_pair<boost::basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > > *, std::__1::allocator<boost::basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > > > > { struct basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > > *__value_; } __end_cap_; } _boostRegexes;
    NSMutableArray *_nsRegexes;
    NSMutableSet *_duplicateChecker;
    NSObject<OS_dispatch_queue> *_ttsRegexQueue;
    NSMutableDictionary *_nsRules;
    NSMutableDictionary *_boostRules;
    NSRegularExpression *_escapeStripper;
}

@property (nonatomic) int regexStyle;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_addRules:(id)a0;
- (void)_addNSRule:(id)a0 ruleApplication:(id)a1 caseInsensitive:(BOOL)a2;
- (id)_boostApplyRulesForText:(id)a0 rangeAdjustments:(id)a1;
- (id)_nsApplyRulesForText:(id)a0 rangeAdjustments:(id)a1;
- (id)_calculatedUTF8Offsets:(id)a0;
- (id)_boostApplyMatches:(id)a0 rangeAdjustments:(id)a1 text:(id)a2 logging:(id)a3;
- (id)_processReplacementStringForSpecialCharacters:(id)a0;
- (void)addRules:(id)a0;
- (id)applyRulesForText:(id)a0 rangeAdjustments:(id)a1;
- (id)regexRules;
- (id)boostRules;
- (BOOL)hasStoredRules;
- (void)resetStoredRules;

@end
