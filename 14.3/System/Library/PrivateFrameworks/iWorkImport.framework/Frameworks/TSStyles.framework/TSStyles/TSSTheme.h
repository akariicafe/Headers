@class NSString, NSMutableDictionary, TSSStylesheet;

@interface TSSTheme : TSPObject <TSKModel, TSKDocumentObject> {
    NSString *mThemeIdentifier;
    NSMutableDictionary *mPresetsByKind;
    TSSStylesheet *mLegacyStylesheet;
    TSSStylesheet *mDocumentStylesheet;
    NSMutableDictionary *mReplacedPresetUUIDs;
}

@property (retain, nonatomic) TSSStylesheet *legacyStylesheet;
@property (retain, nonatomic) TSSStylesheet *documentStylesheet;
@property (retain, nonatomic) NSString *themeIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerPresetSourceClass:(Class)a0;
+ (id)presetSources;
+ (id)presetBootstrapOrder;
+ (void)registerPresetSourceClasses;
+ (BOOL)needsObjectUUID;
+ (id)themeWithContext:(id)a0 alternate:(int)a1 withStylesheet:(id)a2;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)colors;
- (BOOL)isEqual:(id)a0;
- (id)childEnumerator;
- (id)modelPathComponentForChild:(id)a0;
- (id)referencedStyles;
- (void)bootstrapThemeAlternate:(int)a0;
- (void)disablePresetValidation;
- (id)presetKinds;
- (void)insertPreset:(id)a0 ofKind:(id)a1 atIndex:(unsigned long long)a2;
- (id)presetsOfKind:(id)a0;
- (id)presetOfKind:(id)a0 index:(unsigned long long)a1;
- (void)setPresets:(id)a0 ofKind:(id)a1;
- (unsigned long long)indexOfPreset:(id)a0;
- (id)p_identifierForBootstrapTheme:(int)a0;
- (BOOL)hasPresetsOfKind:(id)a0;
- (void)enablePresetValidation;
- (void)addPreset:(id)a0 ofKind:(id)a1;
- (void)removePreset:(id)a0;
- (void)movePresetOfKind:(id)a0 fromIndex:(unsigned long long)a1 toIndex:(unsigned long long)a2;
- (BOOL)containsCGColor:(struct CGColor { } *)a0;
- (void)checkThemeStylesheetConsistency;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)loadFromArchive:(const struct ThemeArchive { void /* function */ **x0; struct ExtensionSet { struct Arena *x0; unsigned short x1; unsigned short x2; union AllocatedData { struct KeyValue *x0; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > *x1; } x3; } x1; struct InternalMetadataWithArena { void *x0; } x2; struct HasBits<1> { unsigned int x0[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x4; struct RepeatedPtrField<TSP::UUID> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct RepeatedPtrField<TSP::UUID> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x6; struct RepeatedPtrField<TSP::Color> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x8; struct Reference *x9; struct Reference *x10; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct ThemeArchive { void /* function */ **x0; struct ExtensionSet { struct Arena *x0; unsigned short x1; unsigned short x2; union AllocatedData { struct KeyValue *x0; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > *x1; } x3; } x1; struct InternalMetadataWithArena { void *x0; } x2; struct HasBits<1> { unsigned int x0[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x4; struct RepeatedPtrField<TSP::UUID> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct RepeatedPtrField<TSP::UUID> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x6; struct RepeatedPtrField<TSP::Color> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x8; struct Reference *x9; struct Reference *x10; } *)a0 archiver:(id)a1;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)a0;
- (id)initWithContext:(id)a0 documentStylesheet:(id)a1;
- (void)upgradeStylesWithBlock:(id /* block */)a0;
- (BOOL)p_shouldDoDOLCForPreset:(id)a0;
- (id)migratedPresetUUIDForPresetUUID:(id)a0;
- (id)p_migratedPresetForPreset:(id)a0 followReplacements:(BOOL)a1;
- (void)recordReplacementOfPresetUUID:(id)a0 withPresetUUID:(id)a1;
- (void)clearReplacementsOfPresetUUID:(id)a0;
- (void)clearAllReplacementsOfPresetUUIDs;
- (id)migratedPresetForPreset:(id)a0;
- (id)migratedPresetForPresetWithoutFollowingReplacements:(id)a0;

@end
