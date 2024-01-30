@class NSData, CKDPRecordZoneIdentifier;

@interface CKDPZoneRetrieveRequest : PBRequest <NSCopying> {
    struct { unsigned char onlyFetchPCSInfo : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (nonatomic) BOOL hasOnlyFetchPCSInfo;
@property (nonatomic) BOOL onlyFetchPCSInfo;
@property (readonly, nonatomic) BOOL hasContinuationMarker;
@property (retain, nonatomic) NSData *continuationMarker;

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
