@class PBUnknownFields, NSString, PBDataReader;

@interface GEOPDTransitScheduleGroup : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _departureSequenceContainerIndexs;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _departureSequenceIndexs;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _incidentIds;
    NSString *_displayName;
    NSString *_pinnedDisplayName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _groupType;
    unsigned int _maxWalkingDistance;
    unsigned int _maxWalkingTime;
    unsigned int _minWalkingDistance;
    unsigned int _minWalkingTime;
    struct { unsigned char has_groupType : 1; unsigned char has_maxWalkingDistance : 1; unsigned char has_maxWalkingTime : 1; unsigned char has_minWalkingDistance : 1; unsigned char has_minWalkingTime : 1; unsigned char read_unknownFields : 1; unsigned char read_departureSequenceContainerIndexs : 1; unsigned char read_departureSequenceIndexs : 1; unsigned char read_incidentIds : 1; unsigned char read_displayName : 1; unsigned char read_pinnedDisplayName : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
