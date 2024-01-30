@class FCCKPRecordZoneIdentifier, NSData, FCCKPQuery, FCCKPRequestedFields;

@interface FCCKPQueryRetrieveRequest : PBRequest <NSCopying> {
    NSData *_continuationMarker;
    unsigned int _limit;
    FCCKPQuery *_query;
    FCCKPRequestedFields *_requestedFields;
    FCCKPRecordZoneIdentifier *_zoneIdentifier;
    struct { unsigned char limit : 1; } _has;
}

+ (id)options;

- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
