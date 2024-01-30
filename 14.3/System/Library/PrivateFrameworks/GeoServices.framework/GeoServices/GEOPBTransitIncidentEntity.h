@class PBUnknownFields, NSSet, NSString, GEOPBTransitIncidentEntityFilter;

@interface GEOPBTransitIncidentEntity : PBCodable <GEOTransitIncidentEntity, NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _affectedMuid;
    GEOPBTransitIncidentEntityFilter *_filter;
    struct { unsigned char has_affectedMuid : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) BOOL hasNextStopIDs;
@property (readonly, nonatomic) NSSet *nextStopIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasAffectedMuid;
@property (nonatomic) unsigned long long affectedMuid;
@property (readonly, nonatomic) BOOL hasFilter;
@property (retain, nonatomic) GEOPBTransitIncidentEntityFilter *filter;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
