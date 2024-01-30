@class TSWPParagraphStyle;

@interface TSATheme : TSSTheme

@property (readonly, nonatomic) TSWPParagraphStyle *titleTextPreset;
@property (readonly, nonatomic) TSWPParagraphStyle *captionTextPreset;

+ (id)presetKinds;
+ (void)bootstrapPresetsOfKind:(id)a0 inTheme:(id)a1 alternate:(int)a2;
+ (void)registerPresetSourceClasses;
+ (id)localizedNameForPresetKind:(id)a0;
+ (id)localizedNameForStylePickerTitle:(id)a0;
+ (id)localizedTitleForApplyStyleMenuItem:(id)a0;
+ (id)localizedTitleForCreateStyleMenuItem:(id)a0;

- (void)loadFromArchive:(const struct ThemeArchive { void /* function */ **x0; struct ExtensionSet { struct Arena *x0; unsigned short x1; unsigned short x2; union AllocatedData { struct KeyValue *x0; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > *x1; } x3; } x1; struct InternalMetadataWithArena { void *x0; } x2; struct HasBits<1> { unsigned int x0[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x4; struct RepeatedPtrField<TSP::UUID> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct RepeatedPtrField<TSP::UUID> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x6; struct RepeatedPtrField<TSP::Color> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x8; struct Reference *x9; struct Reference *x10; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct ThemeArchive { void /* function */ **x0; struct ExtensionSet { struct Arena *x0; unsigned short x1; unsigned short x2; union AllocatedData { struct KeyValue *x0; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > *x1; } x3; } x1; struct InternalMetadataWithArena { void *x0; } x2; struct HasBits<1> { unsigned int x0[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x4; struct RepeatedPtrField<TSP::UUID> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct RepeatedPtrField<TSP::UUID> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x6; struct RepeatedPtrField<TSP::Color> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x8; struct Reference *x9; struct Reference *x10; } *)a0 archiver:(id)a1;
- (void)addCaptionTextStylePresets;
- (void)addCaptionTextStylePresetsForPowerPointImport;

@end
