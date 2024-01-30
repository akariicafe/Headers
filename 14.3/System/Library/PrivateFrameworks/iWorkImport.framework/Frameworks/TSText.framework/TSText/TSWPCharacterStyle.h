@class NSString;

@interface TSWPCharacterStyle : TSSStyle <TSSPreset>

@property (readonly, nonatomic) NSString *presetKind;

+ (id)properties;
+ (id)propertiesAllowingNSNull;
+ (id)emphasisProperties;
+ (id)nullStyleName;
+ (id)nonEmphasisCharacterProperties;
+ (id)nullStyleWithContext:(id)a0;

- (int)writingDirection;
- (BOOL)transformsFontSizes;
- (void)loadFromArchive:(const struct CharacterStyleArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct StyleArchive *x4; struct CharacterStylePropertiesArchive *x5; unsigned int x6; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct CharacterStyleArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct StyleArchive *x4; struct CharacterStylePropertiesArchive *x5; unsigned int x6; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)archivableRepresentationOfChangeSet:(id)a0;

@end
