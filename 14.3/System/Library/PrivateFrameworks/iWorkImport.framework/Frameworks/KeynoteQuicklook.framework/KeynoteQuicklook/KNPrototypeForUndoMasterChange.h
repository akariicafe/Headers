@class NSArray, NSDictionary, KNSlideStyle, NSString, KNMasterSlide, NSUUID;

@interface KNPrototypeForUndoMasterChange : TSPObject <TSSPropertySource> {
    NSUUID *_masterSlideId;
    NSArray *_drawableInfoIdList;
    NSArray *_placeholderTagsList;
}

@property (retain, nonatomic) KNSlideStyle *slideStyle;
@property (readonly, nonatomic) KNMasterSlide *master;
@property (readonly, nonatomic) NSArray *childInfos;
@property (readonly, nonatomic) NSArray *placeholders;
@property (readonly, nonatomic) NSDictionary *placeholdersForTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)blobWithSlide:(id)a0;

- (id)objectForProperty:(int)a0;
- (void)dealloc;
- (id)initWithSlide:(id)a0;
- (float)floatValueForProperty:(int)a0;
- (BOOL)containsProperty:(int)a0;
- (id)boxedObjectForProperty:(int)a0;
- (int)intValueForProperty:(int)a0;
- (double)doubleValueForProperty:(int)a0;
- (double)CGFloatValueForProperty:(int)a0;
- (void)didInitFromSOS;
- (void)saveToArchive:(struct PrototypeForUndoMasterChangeArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::UUID> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena *x0; int x1; int x2; struct Rep *x3; } x6; struct Reference *x7; struct UUID *x8; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)rebuildChildInfosAndPlaceholdersFromMaster:(id)a0;
- (void)migrateStyles;

@end
