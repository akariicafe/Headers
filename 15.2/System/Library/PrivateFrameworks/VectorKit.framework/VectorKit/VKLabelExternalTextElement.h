@interface VKLabelExternalTextElement : NSObject <NSSecureCoding> {
    struct LabelExternalTextElement { unsigned char minZoom; unsigned char textType; struct StringWithLocale { struct basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>> { struct __compressed_pair<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>::__rep, geo::StdAllocator<char, mdm::Allocator>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long long __cap_; } __l; struct __short { char __data_[23]; struct { unsigned char __size_; } ; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; struct StdAllocator<char, mdm::Allocator> { struct Allocator *_allocator; } __value_; } __r_; } text; struct basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>> { struct __compressed_pair<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>::__rep, geo::StdAllocator<char, mdm::Allocator>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long long __cap_; } __l; struct __short { char __data_[23]; struct { unsigned char __size_; } ; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; struct StdAllocator<char, mdm::Allocator> { struct Allocator *_allocator; } __value_; } __r_; } locale; } text; struct StringWithLocale { struct basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>> { struct __compressed_pair<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>::__rep, geo::StdAllocator<char, mdm::Allocator>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long long __cap_; } __l; struct __short { char __data_[23]; struct { unsigned char __size_; } ; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; struct StdAllocator<char, mdm::Allocator> { struct Allocator *_allocator; } __value_; } __r_; } text; struct basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>> { struct __compressed_pair<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>::__rep, geo::StdAllocator<char, mdm::Allocator>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long long __cap_; } __l; struct __short { char __data_[23]; struct { unsigned char __size_; } ; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; struct StdAllocator<char, mdm::Allocator> { struct Allocator *_allocator; } __value_; } __r_; } locale; } localizedText; } _element;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (const void *)element;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithTextElement:(const void *)a0;

@end
