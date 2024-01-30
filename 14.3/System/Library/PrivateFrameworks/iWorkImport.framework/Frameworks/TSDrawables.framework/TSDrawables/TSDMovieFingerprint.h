@class NSArray;

@interface TSDMovieFingerprint : TSKSosBase <NSCopying> {
    int _versionMajor;
    int _versionMinor;
    int _versionPatch;
}

@property (readonly, nonatomic) NSArray *tracks;
@property (readonly, nonatomic) unsigned long long version;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)saveToMessage:(struct MovieFingerprint { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSD::MovieFingerprintTrack> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x5; int x6; } *)a0 archiver:(id)a1;
- (id)initFromMessage:(const struct MovieFingerprint { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSD::MovieFingerprintTrack> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x5; int x6; } *)a0 unarchiver:(id)a1;
- (id)initWithTracks:(id)a0 version:(unsigned long long)a1;
- (id)initWithTracks:(id)a0;

@end
