@class NSString, NSMutableArray;

@interface CPLMomentSharePreviewData : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *previewImageDatas;
@property (readonly, nonatomic) BOOL hasKeyAssetIdentifier;
@property (retain, nonatomic) NSString *keyAssetIdentifier;
@property (readonly, nonatomic) BOOL hasCropRectString;
@property (retain, nonatomic) NSString *cropRectString;
@property (retain, nonatomic) NSMutableArray *curatedAssetIdentifiers;

+ (Class)curatedAssetIdentifiersType;
+ (Class)previewImageDataType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addPreviewImageData:(id)a0;
- (id)curatedAssetIdentifiersAtIndex:(unsigned long long)a0;
- (void)addCuratedAssetIdentifiers:(id)a0;
- (void)clearCuratedAssetIdentifiers;
- (void)clearPreviewImageDatas;
- (unsigned long long)curatedAssetIdentifiersCount;
- (id)previewImageDataAtIndex:(unsigned long long)a0;
- (unsigned long long)previewImageDatasCount;

@end
