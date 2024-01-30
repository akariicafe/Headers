@class NSArray;

@interface REMClockElementList : NSObject

@property (copy, nonatomic) NSArray *elements;

+ (BOOL)list:(id)a0 isCompatibleToList:(id)a1;
+ (long long)compareList:(id)a0 toList:(id)a1;

- (void).cxx_destruct;
- (id)initWithCRVectorTimestampElements:(id)a0;
- (id)initWithTTVectorTimestampElements:(id)a0;
- (void)encodeIntoEntryArchive:(struct ReplicaEntry { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; unsigned int x4; unsigned int x5; struct RepeatedPtrField<replica_manager::VectorTimestampElement> { void **x0; int x1; int x2; int x3; } x6; } *)a0;
- (id)initWithEntryArchive:(const struct ReplicaEntry { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; unsigned int x4; unsigned int x5; struct RepeatedPtrField<replica_manager::VectorTimestampElement> { void **x0; int x1; int x2; int x3; } x6; } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
