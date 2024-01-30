@interface DEGroundingInfo : NSObject

@property struct GroundingInfo { unsigned long long mCount; struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } mTimestamps; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } mText; } This;

- (id).cxx_construct;
- (int)count;
- (id)text;
- (void).cxx_destruct;
- (id)timestamps;
- (id)init:(int)a0 timeStamps:(id)a1 text:(id)a2;

@end
