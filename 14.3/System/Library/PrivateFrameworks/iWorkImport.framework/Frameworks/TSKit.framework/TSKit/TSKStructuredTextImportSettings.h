@class NSSet, NSIndexSet;

@interface TSKStructuredTextImportSettings : NSObject <NSCopying>

@property (nonatomic) long long type;
@property (nonatomic) unsigned long long startingRow;
@property (copy, nonatomic) NSSet *decimalSeparators;
@property (copy, nonatomic) NSSet *thousandsSeparators;
@property (nonatomic) BOOL transposeRowsAndColumns;
@property (copy, nonatomic) NSSet *delimiters;
@property (nonatomic) BOOL automaticDelimiters;
@property (copy, nonatomic) NSSet *textQualifiers;
@property (nonatomic) BOOL collapseConsecutiveDelimiters;
@property (copy, nonatomic) NSIndexSet *columnOffsets;
@property (nonatomic) BOOL automaticOffsets;
@property (nonatomic) unsigned long long sourceEncoding;
@property (readonly, nonatomic) BOOL hasAnyAutomaticSettings;

+ (id)settings;
+ (id)settingsWithType:(long long)a0;
+ (id)keyPathsForValuesAffectingIsValid;
+ (id)settingsFromArchive:(const struct StructuredTextImportSettings { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena *x0; int x1; int x2; struct Rep *x3; } x6; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena *x0; int x1; int x2; struct Rep *x3; } x7; struct IndexSet *x8; int x9; int x10; unsigned long long x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; } *)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isValid;
- (id)initWithType:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)errorString;
- (id)initFromArchive:(const struct StructuredTextImportSettings { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena *x0; int x1; int x2; struct Rep *x3; } x6; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena *x0; int x1; int x2; struct Rep *x3; } x7; struct IndexSet *x8; int x9; int x10; unsigned long long x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; } *)a0;
- (void)encodeToArchive:(struct StructuredTextImportSettings { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena *x0; int x1; int x2; struct Rep *x3; } x6; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena *x0; int x1; int x2; struct Rep *x3; } x7; struct IndexSet *x8; int x9; int x10; unsigned long long x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; } *)a0;

@end
