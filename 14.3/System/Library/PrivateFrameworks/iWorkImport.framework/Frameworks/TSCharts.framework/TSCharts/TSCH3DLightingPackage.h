@class NSString, NSArray;

@interface TSCH3DLightingPackage : NSObject <TSSPropertyValueArchiving, NSCopying> {
    NSArray *_lights;
}

@property (copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *localizedName;

+ (id)localizedNameForName:(id)a0;
+ (id)package;
+ (id)instanceWithArchive:(const struct Chart3DLightingPackageArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSCH::Chart3DLightArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; } *)a0 unarchiver:(id)a1;
+ (id)packageFromName:(id)a0;
+ (id)packageWithSageLightingPackageData:(id)a0;
+ (id)allNamedPackages;
+ (id)p_sageLightingPackageNames;
+ (id)nameFromSageLightingPackageName:(id)a0;
+ (id)sageNameFromLightingPackageName:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithArchive:(const struct Chart3DLightingPackageArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSCH::Chart3DLightArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; } *)a0 unarchiver:(id)a1;
- (void)didInitFromSOS;
- (void)saveToArchive:(struct Chart3DLightingPackageArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSCH::Chart3DLightArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; } *)a0 archiver:(id)a1;
- (void)affect:(id)a0 states:(id)a1 scene:(id)a2 texturePool:(id)a3;
- (void)addLight:(id)a0;

@end
