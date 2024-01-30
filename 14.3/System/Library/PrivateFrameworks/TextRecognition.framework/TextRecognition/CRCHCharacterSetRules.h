@class NSObject, NSCharacterSet;
@protocol OS_dispatch_queue;

@interface CRCHCharacterSetRules : NSObject

@property (retain, nonatomic) NSCharacterSet *lowercaseCharSet;
@property (retain, nonatomic) NSCharacterSet *uppercaseCharSet;
@property (retain, nonatomic) NSCharacterSet *digitCharSet;
@property (retain, nonatomic) NSCharacterSet *startPunctuationCharSet;
@property (retain, nonatomic) NSCharacterSet *middlePunctuationCharSet;
@property (retain, nonatomic) NSCharacterSet *endPunctuationCharSet;
@property (retain, nonatomic) NSCharacterSet *digitStartPunctuationCharSet;
@property (retain, nonatomic) NSCharacterSet *digitEndPunctuationCharSet;
@property (retain, nonatomic) NSCharacterSet *arithmeticOperatorCharSet;
@property (retain, nonatomic) NSCharacterSet *dateTimeSeparatorCharSet;
@property (retain, nonatomic) NSCharacterSet *dateTimeEndLetterCharSet;
@property (retain, nonatomic) NSCharacterSet *numeralEndLetterCharSet;
@property (retain, nonatomic) NSCharacterSet *lexiconSkipCharSet;
@property (retain, nonatomic) NSCharacterSet *containsDotCharSet;
@property (retain, nonatomic) NSCharacterSet *prefixCapitalizationExceptionCharSet;
@property (retain, nonatomic) NSCharacterSet *selfLoopPunctuationCharSet;
@property (retain, nonatomic) NSCharacterSet *emoticonTopCharSet;
@property (retain, nonatomic) NSCharacterSet *emoticonMiddleCharSet;
@property (retain, nonatomic) NSCharacterSet *emoticonBottomCharSet;
@property (retain, nonatomic) NSCharacterSet *emailAtCharSet;
@property (retain, nonatomic) NSCharacterSet *emailPunctuationCharSet;
@property (retain, nonatomic) NSCharacterSet *urlPunctuationCharSet;
@property (nonatomic) struct map<unsigned int, unsigned long, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned long> > > { struct __tree<std::__1::__value_type<unsigned int, unsigned long>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned long>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned long> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned long>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned long>, std::__1::less<unsigned int>, true> > { unsigned long long __value_; } __pair3_; } __tree_; } strokeMaxPenalties;
@property (nonatomic) struct map<unsigned int, int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, int> > > { struct __tree<std::__1::__value_type<unsigned int, int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, int> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, int>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, int>, std::__1::less<unsigned int>, true> > { unsigned long long __value_; } __pair3_; } __tree_; } signatureUniChar;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *_charSetRulesQueue;

+ (id)sharedCharacterSetRules;
+ (unsigned long long)expectedMaxStrokeCount:(unsigned int)a0;
+ (unsigned long long)expectedMinStrokeCount:(unsigned int)a0;
+ (unsigned long long)characterType:(unsigned int)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (unsigned long long)_expectedMaxStrokeCount:(unsigned int)a0;
- (unsigned long long)_expectedMinStrokeCount:(unsigned int)a0;
- (unsigned long long)_characterType:(unsigned int)a0;

@end
