@class CKDPStreamingAssetRetrieveAssetResponse, CKDPStreamingAssetSaveAssetResponse, CKDPStreamingAssetIdentifier, CKDPStreamingAssetSaveAssetRequest;

@interface CKDPStreamingAsset : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAssetId;
@property (retain, nonatomic) CKDPStreamingAssetIdentifier *assetId;
@property (readonly, nonatomic) BOOL hasSaveAssetRequest;
@property (retain, nonatomic) CKDPStreamingAssetSaveAssetRequest *saveAssetRequest;
@property (readonly, nonatomic) BOOL hasSaveAssetResponse;
@property (retain, nonatomic) CKDPStreamingAssetSaveAssetResponse *saveAssetResponse;
@property (readonly, nonatomic) BOOL hasRetrieveAssetResponse;
@property (retain, nonatomic) CKDPStreamingAssetRetrieveAssetResponse *retrieveAssetResponse;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
