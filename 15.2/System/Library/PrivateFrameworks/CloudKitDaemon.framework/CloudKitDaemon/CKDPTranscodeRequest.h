@class CKCodeRecordTransport, NSData;

@interface CKDPTranscodeRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasRecord;
@property (retain, nonatomic) CKCodeRecordTransport *record;
@property (readonly, nonatomic) BOOL hasConstructedAssetDownloadParameters;
@property (retain, nonatomic) NSData *constructedAssetDownloadParameters;

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
