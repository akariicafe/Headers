@class NSString, CKDPZone;

@interface CKDPZoneSaveRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasRecordZone;
@property (retain, nonatomic) CKDPZone *recordZone;
@property (readonly, nonatomic) BOOL hasZoneProtectionInfoTag;
@property (retain, nonatomic) NSString *zoneProtectionInfoTag;

+ (id)options;

- (Class)responseClass;
- (unsigned int)requestTypeCode;
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
