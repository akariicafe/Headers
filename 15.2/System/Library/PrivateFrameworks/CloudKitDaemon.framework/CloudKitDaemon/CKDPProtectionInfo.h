@class NSData, NSString;

@interface CKDPProtectionInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasProtectionInfo;
@property (retain, nonatomic) NSData *protectionInfo;
@property (readonly, nonatomic) BOOL hasProtectionInfoTag;
@property (retain, nonatomic) NSString *protectionInfoTag;

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
