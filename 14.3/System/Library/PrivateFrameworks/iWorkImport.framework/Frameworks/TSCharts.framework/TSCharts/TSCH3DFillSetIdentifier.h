@class NSString;

@interface TSCH3DFillSetIdentifier : NSObject {
    int _seriesIndex;
    int _fillPropertyType;
}

@property (readonly, nonatomic) NSString *textureSetID;
@property (readonly, nonatomic) NSString *textureSetFilename;
@property (readonly, nonatomic) unsigned long long seriesIndex;

+ (id)instanceWithArchive:(const struct Chart3DFillArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct Chart3DLightingModelArchive *x5; int x6; unsigned int x7; } *)a0 unarchiver:(id)a1;
+ (id)identifierWithFillPropertyType:(int)a0 seriesIndex:(unsigned long long)a1 textureSetID:(id)a2;
+ (id)instanceWithDEPRECATEDArchive:(const struct DEPRECATEDChart3DFillArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct FillArchive *x5; struct Chart3DLightingModelArchive *x6; int x7; unsigned int x8; } *)a0 unarchiver:(id)a1;
+ (id)identifierWithFillName:(id)a0 seriesName:(id)a1 textureSetID:(id)a2;
+ (id)identifierWithContentsOfDictionary:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)setSeriesIndex:(unsigned long long)a0;
- (id)initWithContentsOfDictionary:(id)a0;
- (id)localDirectoryPath;
- (id)initWithArchive:(const struct Chart3DFillArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct Chart3DLightingModelArchive *x5; int x6; unsigned int x7; } *)a0 unarchiver:(id)a1;
- (void)didInitFromSOS;
- (void)saveToArchive:(struct Chart3DFillArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct Chart3DLightingModelArchive *x5; int x6; unsigned int x7; } *)a0 archiver:(id)a1;
- (unsigned long long)countOfSeriesInFillSet;
- (BOOL)isOnDemandResource;
- (id)lowResLocalDirectoryPath;
- (id)mipmapLocalDirectoryPath;
- (id)textureOnDemandResourceTag;
- (id)mipmapOnDemandResourceTag;
- (BOOL)isStoredInLocalBundle;
- (id)lowResTextureSetFilename;
- (id)mipmapTextureSetFilename;
- (id)initWithFillName:(id)a0 seriesName:(id)a1 textureSetID:(id)a2;
- (int)fillPropertyTypeFromName:(id)a0;
- (unsigned long long)seriesIndexFromSageSeriesName:(id)a0;
- (id)initWithFillPropertyType:(int)a0 seriesIndex:(unsigned long long)a1 textureSetID:(id)a2;
- (id)p_sageFillPropertyNames;
- (id)p_sageSeriesNames;
- (id)p_plistPath;
- (id)p_plistData;
- (id)p_loadPlist;
- (id)p_getPlist;
- (id)p_version;
- (id)sageFillName;
- (id)sageSeriesName;
- (id)p_sageFillSetList;
- (BOOL)isSageCompatible;
- (id)loadPropertiesDictionary;

@end
