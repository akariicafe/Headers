@class NSString;

@interface TSCH3DFillSetIdentifier : NSObject {
    int _seriesIndex;
    int _fillPropertyType;
}

@property (readonly, nonatomic) NSString *textureSetID;
@property (readonly, nonatomic) NSString *textureSetFilename;
@property (readonly, nonatomic) unsigned long long seriesIndex;

+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;
+ (id)identifierWithFillPropertyType:(int)a0 seriesIndex:(unsigned long long)a1 textureSetID:(id)a2;
+ (id)instanceWithDEPRECATEDArchive:(const void *)a0 unarchiver:(id)a1;
+ (id)identifierWithFillName:(id)a0 seriesName:(id)a1 textureSetID:(id)a2;
+ (id)identifierWithContentsOfDictionary:(id)a0;

- (void)setSeriesIndex:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithContentsOfDictionary:(id)a0;
- (id)localDirectoryPath;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)didInitFromSOS;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
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
