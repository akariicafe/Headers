@class NSString;

@interface SKAttribute : NSObject <NSSecureCoding> {
    long long _type;
    NSString *_name;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long long __cap_; } __l; struct __short { char __data_[23]; struct { unsigned char __size_; } ; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } _nameString;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long type;

+ (id)attributeWithName:(id)a0 type:(long long)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0 type:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (const void *)getNameString;
- (BOOL)isEqualToAttribute:(id)a0;

@end
