@class NSString;

@interface _EARSpeechRecognitionToken : NSObject <NSCopying>

@property (readonly, nonatomic) struct Token { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } tokenName; unsigned int startMilliseconds; unsigned int endMilliseconds; unsigned int silStartMilliSeconds; float confidence; BOOL hasSpaceAfter; BOOL hasSpaceBefore; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } phoneSeq; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } ipaPhoneSeq; struct vector<std::pair<std::string, float>, std::allocator<std::pair<std::string, float>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<std::string, float> *, std::allocator<std::pair<std::string, float>>> { void *__value_; } __end_cap_; } subwordConfidence; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } muxId; BOOL appendedAutoPunctuation; BOOL prependedAutoPunctuation; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } alternateTokenName; BOOL isModifiedByAutoPunctuation; } quasarToken;
@property (readonly, copy, nonatomic) NSString *tokenName;
@property (readonly, nonatomic) double start;
@property (readonly, nonatomic) double end;
@property (readonly, nonatomic) double silenceStart;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) BOOL hasSpaceAfter;
@property (readonly, nonatomic) BOOL hasSpaceBefore;
@property (readonly, nonatomic) NSString *phoneSequence;
@property (readonly, nonatomic) NSString *ipaPhoneSequence;
@property (readonly, nonatomic) BOOL appendedAutoPunctuation;
@property (readonly, nonatomic) BOOL prependedAutoPunctuation;
@property (readonly, nonatomic) BOOL isModifiedByAutoPunctuation;

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithQuasarToken:(const void *)a0;
- (id)initWithTokenName:(id)a0 start:(double)a1 end:(double)a2 silenceStart:(double)a3 confidence:(double)a4 hasSpaceAfter:(BOOL)a5 hasSpaceBefore:(BOOL)a6 phoneSequence:(id)a7 ipaPhoneSequence:(id)a8;
- (id)initWithTokenName:(id)a0 start:(double)a1 end:(double)a2 silenceStart:(double)a3 confidence:(double)a4 hasSpaceAfter:(BOOL)a5 hasSpaceBefore:(BOOL)a6 phoneSequence:(id)a7 ipaPhoneSequence:(id)a8 appendedAutoPunctuation:(BOOL)a9;

@end
