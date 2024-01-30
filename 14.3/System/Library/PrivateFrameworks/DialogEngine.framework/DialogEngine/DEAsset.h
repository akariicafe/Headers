@class NSData;

@interface DEAsset : NSObject

@property (retain, nonatomic) NSData *version;
@property (retain, nonatomic) NSData *encryptedVersion;
@property (nonatomic) unsigned long long downloadType;
@property (nonatomic) unsigned long long encryptedSize;

+ (void)assetToPb:(id)a0 asset:(id)a1 assetPb:(struct Asset { void /* function */ **x0; struct InternalMetadataWithArenaLite { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x6; unsigned long long x7; int x8; } *)a2;
+ (unsigned long long)downloadTypeFromPb:(int)a0;
+ (int)downloadTypeToPb:(unsigned long long)a0;
+ (id)assetFromPb:(const struct Asset { void /* function */ **x0; struct InternalMetadataWithArenaLite { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x6; unsigned long long x7; int x8; } *)a0;

- (void).cxx_destruct;

@end
