@class NSObject, NSCharacterSet;
@protocol OS_dispatch_queue;

@interface CHCharacterSetRules : NSObject

@property (retain, nonatomic) NSCharacterSet *lowercaseCharSet;
@property (retain, nonatomic) NSCharacterSet *uppercaseCharSet;
@property (retain, nonatomic) NSCharacterSet *digitCharSet;
@property (retain, nonatomic) NSCharacterSet *startPunctuationCharSet;
@property (retain, nonatomic) NSCharacterSet *middlePunctuationCharSet;
@property (retain, nonatomic) NSCharacterSet *endOfWordPunctuationCharSet;
@property (retain, nonatomic) NSCharacterSet *endOfSentencePunctuationCharSet;
@property (retain, nonatomic) NSCharacterSet *digitStartPunctuationCharSet;
@property (retain, nonatomic) NSCharacterSet *digitEndPunctuationCharSet;
@property (retain, nonatomic) NSCharacterSet *arithmeticOperatorCharSet;
@property (retain, nonatomic) NSCharacterSet *dateTimeSeparatorCharSet;
@property (retain, nonatomic) NSCharacterSet *dateTimeEndLetterCharSet;
@property (retain, nonatomic) NSCharacterSet *numeralEndLetterCharSet;
@property (retain, nonatomic) NSCharacterSet *lexiconSkipCharSet;
@property (retain, nonatomic) NSCharacterSet *containsDotCharSet;
@property (retain, nonatomic) NSCharacterSet *containsTwoDotsCharSet;
@property (retain, nonatomic) NSCharacterSet *prefixCapitalizationExceptionCharSet;
@property (retain, nonatomic) NSCharacterSet *selfLoopPunctuationCharSet;
@property (retain, nonatomic) NSCharacterSet *emoticonTopCharSet;
@property (retain, nonatomic) NSCharacterSet *emoticonMiddleCharSet;
@property (retain, nonatomic) NSCharacterSet *emoticonBottomCharSet;
@property (retain, nonatomic) NSCharacterSet *emailAtCharSet;
@property (retain, nonatomic) NSCharacterSet *emailPunctuationCharSet;
@property (retain, nonatomic) NSCharacterSet *urlPunctuationCharSet;
@property (retain, nonatomic) NSCharacterSet *nonSpaceSeparatorCharSet;
@property (retain, nonatomic) NSCharacterSet *punctuationThatNeedSpaceCleanup;
@property (retain, nonatomic) NSCharacterSet *currencySymbols;
@property (retain, nonatomic) NSCharacterSet *symbolsRequiringSpaceBeforeInFrench;
@property (retain, nonatomic) NSCharacterSet *sentenceStartPunctuationInSpanish;
@property (retain, nonatomic) NSCharacterSet *commonJapaneseSymbols;
@property (retain, nonatomic) NSCharacterSet *CJKPairedPunctuationsCharSet;
@property (retain, nonatomic) NSCharacterSet *alphaNumericCharSet;
@property (nonatomic) struct map<unsigned int, unsigned long, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>> { struct __tree<std::__value_type<unsigned int, unsigned long>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, unsigned long>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, unsigned long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } strokeMaxPenalties;
@property (nonatomic) struct map<unsigned int, int, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, int>>> { struct __tree<std::__value_type<unsigned int, int>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, int>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, int>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, int>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, int>, std::less<unsigned int>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } signatureUniChar;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_charSetRulesQueue;

+ (unsigned long long)characterType:(unsigned int)a0;
+ (unsigned long long)characterTypeFromString:(id)a0;
+ (unsigned long long)expectedMaxDotCount:(unsigned int)a0;
+ (unsigned long long)expectedMaxStrokeCount:(unsigned int)a0;
+ (unsigned long long)expectedMinStrokeCount:(unsigned int)a0;
+ (id)sharedCharacterSetRules;

- (id).cxx_construct;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_characterType:(unsigned int)a0;
- (unsigned long long)_expectedMaxDotCount:(unsigned int)a0;
- (unsigned long long)_expectedMaxStrokeCount:(unsigned int)a0;
- (unsigned long long)_expectedMinStrokeCount:(unsigned int)a0;

@end
