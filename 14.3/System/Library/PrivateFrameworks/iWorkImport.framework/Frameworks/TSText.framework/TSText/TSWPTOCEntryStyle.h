@interface TSWPTOCEntryStyle : TSWPParagraphStyle

+ (id)properties;
+ (id)defaultValueForProperty:(int)a0;
+ (int)defaultIntValueForProperty:(int)a0;
+ (id)propertiesAllowingNSNull;

- (id)initWithContext:(id)a0 name:(id)a1 overridePropertyMap:(id)a2 isVariation:(BOOL)a3;
- (id)presetKind;
- (void)saveToArchive:(struct TOCEntryStyleArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ParagraphStyleArchive *x4; struct TOCEntryStylePropertiesArchive *x5; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithContext:(id)a0 name:(id)a1 basedOnParagraphStyle:(id)a2;
- (id)parentStyleForFixingOrphanVariation;
- (void)p_loadTOCEntryParagraphStylePropertiesIntoPropertyMap:(id)a0 fromArchive:(const struct TOCEntryStylePropertiesArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; BOOL x5; BOOL x6; } *)a1 unarchiver:(id)a2;
- (void)p_saveTOCEntryStylePropertiesToArchive:(struct TOCEntryStylePropertiesArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; BOOL x5; BOOL x6; } *)a0 archiver:(id)a1;

@end
