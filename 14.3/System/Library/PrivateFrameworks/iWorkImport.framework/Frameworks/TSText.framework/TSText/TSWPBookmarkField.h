@class NSString, NSURL;

@interface TSWPBookmarkField : TSWPSmartField <TSWPBookmarkEntry>

@property (readonly, copy, nonatomic) NSString *name;
@property (nonatomic) BOOL forRange;
@property (readonly, nonatomic) BOOL hidden;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } effectiveRange;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *key;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsNonBodyBookmarks;
+ (id)normalizedNameForName:(id)a0;
+ (id)uniqueBookmarkNameFromBase:(id)a0 excludingNames:(id)a1;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (BOOL)allowsEditing;
- (id)copyWithNewName:(id)a0;
- (unsigned long long)attributeArrayKind;
- (int)styleAttributeArrayKind;
- (void)loadFromArchive:(const struct BookmarkFieldArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct SmartFieldArchive *x5; unsigned int x6; unsigned int x7; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct BookmarkFieldArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct SmartFieldArchive *x5; unsigned int x6; unsigned int x7; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (unsigned short)smartFieldKind;
- (BOOL)isEquivalentToObject:(id)a0;
- (void)resetTextAttributeUUIDString;
- (id)initWithContext:(id)a0 name:(id)a1 forRange:(BOOL)a2 hidden:(BOOL)a3;

@end
