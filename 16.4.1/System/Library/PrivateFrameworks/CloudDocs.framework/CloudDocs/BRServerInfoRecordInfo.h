@class NSString, NSData;

@interface BRServerInfoRecordInfo : PBCodable <NSCopying> {
    struct { unsigned char bounceNo : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRecordID;
@property (retain, nonatomic) NSString *recordID;
@property (readonly, nonatomic) BOOL hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (readonly, nonatomic) BOOL hasEncryptedBasename;
@property (retain, nonatomic) NSData *encryptedBasename;
@property (nonatomic) BOOL hasBounceNo;
@property (nonatomic) unsigned long long bounceNo;
@property (readonly, nonatomic) BOOL hasExtension;
@property (retain, nonatomic) NSString *extension;
@property (readonly, nonatomic) BOOL hasRecordProtectionInfo;
@property (retain, nonatomic) NSData *recordProtectionInfo;
@property (readonly, nonatomic) BOOL hasZoneName;
@property (retain, nonatomic) NSString *zoneName;
@property (readonly, nonatomic) BOOL hasZoneProtectionInfo;
@property (retain, nonatomic) NSData *zoneProtectionInfo;

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

@end
