@class FCCKPRecordZoneIdentifier, NSData, FCCKPQuery, FCCKPRequestedFields;

@interface FCCKPQueryRetrieveRequest : PBRequest <NSCopying> {
    struct { unsigned char limit : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasQuery;
@property (retain, nonatomic) FCCKPQuery *query;
@property (readonly, nonatomic) BOOL hasContinuationMarker;
@property (retain, nonatomic) NSData *continuationMarker;
@property (nonatomic) BOOL hasLimit;
@property (nonatomic) unsigned int limit;
@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (retain, nonatomic) FCCKPRecordZoneIdentifier *zoneIdentifier;
@property (readonly, nonatomic) BOOL hasRequestedFields;
@property (retain, nonatomic) FCCKPRequestedFields *requestedFields;

+ (id)options;

- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
