@class NSString, NSData;

@interface CKDPStreamingAssetIdentifier : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasOwner;
@property (retain, nonatomic) NSString *owner;
@property (readonly, nonatomic) BOOL hasFileSignature;
@property (retain, nonatomic) NSData *fileSignature;
@property (readonly, nonatomic) BOOL hasReferenceSignature;
@property (retain, nonatomic) NSData *referenceSignature;

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
