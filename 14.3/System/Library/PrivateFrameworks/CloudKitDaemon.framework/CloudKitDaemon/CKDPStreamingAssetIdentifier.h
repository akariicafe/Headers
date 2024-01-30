@class NSString, NSData;

@interface CKDPStreamingAssetIdentifier : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasOwner;
@property (retain, nonatomic) NSString *owner;
@property (readonly, nonatomic) BOOL hasFileSignature;
@property (retain, nonatomic) NSData *fileSignature;
@property (readonly, nonatomic) BOOL hasReferenceSignature;
@property (retain, nonatomic) NSData *referenceSignature;

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
