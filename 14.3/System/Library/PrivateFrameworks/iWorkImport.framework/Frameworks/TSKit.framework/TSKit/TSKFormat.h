@interface TSKFormat : NSObject <NSCopying>

@property (class, readonly, nonatomic) TSKFormat *textFormat;
@property (class, readonly, nonatomic) TSKFormat *checkboxFormat;
@property (class, readonly, nonatomic) TSKFormat *ratingFormat;
@property (class, readonly, nonatomic) TSKFormat *booleanFormat;

@property (readonly, nonatomic) struct { unsigned int x0; union { struct { unsigned short x0 : 16; unsigned char x1 : 8; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; } x0; struct { unsigned char x0 : 8; } x1; struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 1; } x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; id x2; } x3; struct { unsigned char x0 : 1; int x1; int x2; int x3; } x4; struct { id x0; id x1; unsigned int x2; unsigned char x3; } x5; } x1; } formatStruct;
@property (readonly, nonatomic) unsigned int formatType;

+ (void)initialize;
+ (id)defaultFormatWithFormatType:(unsigned int)a0 locale:(id)a1;
+ (id)formatFromArchive:(const struct FormatStructArchive { void /* function */ **x0; struct ExtensionSet { struct Arena *x0; unsigned short x1; unsigned short x2; union AllocatedData { struct KeyValue *x0; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > *x1; } x3; } x1; struct InternalMetadataWithArena { void *x0; } x2; struct HasBits<2> { unsigned int x0[2]; } x3; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x8; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x9; struct IndexSet *x10; struct UUID *x11; struct CustomFormatArchive *x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; BOOL x18; BOOL x19; BOOL x20; BOOL x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; double x26; unsigned int x27; unsigned int x28; double x29; double x30; double x31; unsigned int x32; unsigned int x33; BOOL x34; BOOL x35; BOOL x36; BOOL x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; BOOL x47; BOOL x48; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x49; } *)a0;
+ (id)formatFromTSUFormatStruct:(struct { unsigned int x0; union { struct { unsigned short x0 : 16; unsigned char x1 : 8; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; } x0; struct { unsigned char x0 : 8; } x1; struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 1; } x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; id x2; } x3; struct { unsigned char x0 : 1; int x1; int x2; int x3; } x4; struct { id x0; id x1; unsigned int x2; unsigned char x3; } x5; } x1; })a0;
+ (unsigned int)validatedDecimalPlaces:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithFormatType:(unsigned int)a0;
- (id)stringFromDouble:(double)a0 locale:(id)a1;
- (void)encodeToArchive:(struct FormatStructArchive { void /* function */ **x0; struct ExtensionSet { struct Arena *x0; unsigned short x1; unsigned short x2; union AllocatedData { struct KeyValue *x0; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > *x1; } x3; } x1; struct InternalMetadataWithArena { void *x0; } x2; struct HasBits<2> { unsigned int x0[2]; } x3; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x8; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x9; struct IndexSet *x10; struct UUID *x11; struct CustomFormatArchive *x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; BOOL x18; BOOL x19; BOOL x20; BOOL x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; double x26; unsigned int x27; unsigned int x28; double x29; double x30; double x31; unsigned int x32; unsigned int x33; BOOL x34; BOOL x35; BOOL x36; BOOL x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; BOOL x47; BOOL x48; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x49; } *)a0;
- (id)asCurrencyFormat;
- (id)asDateTimeFormat;
- (id)stringFromBool:(BOOL)a0 locale:(id)a1;
- (id)asCustomFormatWrapper;
- (id)asNumberFormat;
- (id)asDurationFormat;
- (id)asFractionFormat;
- (id)asBaseFormat;
- (id)asBooleanFormat;
- (void)encodeToArchive:(struct FormatStructArchive { void /* function */ **x0; struct ExtensionSet { struct Arena *x0; unsigned short x1; unsigned short x2; union AllocatedData { struct KeyValue *x0; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > *x1; } x3; } x1; struct InternalMetadataWithArena { void *x0; } x2; struct HasBits<2> { unsigned int x0[2]; } x3; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x8; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x9; struct IndexSet *x10; struct UUID *x11; struct CustomFormatArchive *x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; BOOL x18; BOOL x19; BOOL x20; BOOL x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; double x26; unsigned int x27; unsigned int x28; double x29; double x30; double x31; unsigned int x32; unsigned int x33; BOOL x34; BOOL x35; BOOL x36; BOOL x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; BOOL x47; BOOL x48; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x49; } *)a0 archivingCustomFormats:(BOOL)a1;
- (BOOL)hasSimpleFormatType;
- (id)stringFromDate:(id)a0 locale:(id)a1;
- (id)stringFromDurationTimeInterval:(double)a0 locale:(id)a1;
- (id)stringFromString:(id)a0 locale:(id)a1;
- (id)asLegacyCustomFormat;
- (id)asStepperSliderFormat;
- (id)asMultipleChoiceListFormat;

@end
