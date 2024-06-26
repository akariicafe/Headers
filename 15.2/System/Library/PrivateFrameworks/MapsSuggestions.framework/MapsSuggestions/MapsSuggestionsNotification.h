@interface MapsSuggestionsNotification : NSObject <NSCopying> {
    struct Notification { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long long __cap_; } __l; struct __short { char __data_[23]; struct { unsigned char __size_; } ; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } darwinNotification; int token; unsigned long long state; } _notification;
}

@property (readonly, nonatomic) const char *darwinNotification;
@property (readonly, nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (id)initWithCppNotification:(const void *)a0;
- (BOOL)stateCouldHaveBeenPayloadString:(id)a0;

@end
