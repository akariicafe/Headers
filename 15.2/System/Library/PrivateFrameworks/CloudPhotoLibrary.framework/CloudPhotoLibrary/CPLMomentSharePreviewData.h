@class NSString, NSMutableArray;

@interface CPLMomentSharePreviewData : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *previewImageDatas;
@property (readonly, nonatomic) BOOL hasKeyAssetIdentifier;
@property (retain, nonatomic) NSString *keyAssetIdentifier;
@property (readonly, nonatomic) BOOL hasCropRectString;
@property (retain, nonatomic) NSString *cropRectString;
@property (retain, nonatomic) NSMutableArray *curatedAssetIdentifiers;

+ (Class)previewImageDataType;
+ (Class)curatedAssetIdentifiersType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addPreviewImageData:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)clearPreviewImageDatas;
- (unsigned long long)previewImageDatasCount;
- (id)previewImageDataAtIndex:(unsigned long long)a0;
- (void)clearCuratedAssetIdentifiers;
- (void)addCuratedAssetIdentifiers:(id)a0;
- (unsigned long long)curatedAssetIdentifiersCount;
- (id)curatedAssetIdentifiersAtIndex:(unsigned long long)a0;

@end
