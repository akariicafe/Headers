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

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
