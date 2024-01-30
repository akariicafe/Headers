@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOTransitSection : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _actionSheetArtworkIndexs;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _routeDetailsArtworkIndexs;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _stepIndexs;
    NSString *_actionSheetName;
    NSMutableArray *_ticketingSegments;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _nextOptionsIndex;
    BOOL _disableAlightNotifications;
    struct { unsigned char has_nextOptionsIndex : 1; unsigned char has_disableAlightNotifications : 1; unsigned char read_unknownFields : 1; unsigned char read_actionSheetArtworkIndexs : 1; unsigned char read_routeDetailsArtworkIndexs : 1; unsigned char read_stepIndexs : 1; unsigned char read_actionSheetName : 1; unsigned char read_ticketingSegments : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long stepIndexsCount;
@property (readonly, nonatomic) unsigned int *stepIndexs;
@property (nonatomic) BOOL hasNextOptionsIndex;
@property (nonatomic) int nextOptionsIndex;
@property (readonly, nonatomic) BOOL hasActionSheetName;
@property (retain, nonatomic) NSString *actionSheetName;
@property (readonly, nonatomic) unsigned long long actionSheetArtworkIndexsCount;
@property (readonly, nonatomic) unsigned int *actionSheetArtworkIndexs;
@property (readonly, nonatomic) unsigned long long routeDetailsArtworkIndexsCount;
@property (readonly, nonatomic) unsigned int *routeDetailsArtworkIndexs;
@property (nonatomic) BOOL hasDisableAlightNotifications;
@property (nonatomic) BOOL disableAlightNotifications;
@property (retain, nonatomic) NSMutableArray *ticketingSegments;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)ticketingSegmentType;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned int)actionSheetArtworkIndexAtIndex:(unsigned long long)a0;
- (void)clearStepIndexs;
- (void)addActionSheetArtworkIndex:(unsigned int)a0;
- (void)addRouteDetailsArtworkIndex:(unsigned int)a0;
- (void)addStepIndex:(unsigned int)a0;
- (void)addTicketingSegment:(id)a0;
- (void)clearActionSheetArtworkIndexs;
- (void)clearRouteDetailsArtworkIndexs;
- (void)clearTicketingSegments;
- (unsigned int)routeDetailsArtworkIndexAtIndex:(unsigned long long)a0;
- (void)setActionSheetArtworkIndexs:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setRouteDetailsArtworkIndexs:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setStepIndexs:(unsigned int *)a0 count:(unsigned long long)a1;
- (unsigned int)stepIndexAtIndex:(unsigned long long)a0;
- (id)ticketingSegmentAtIndex:(unsigned long long)a0;
- (unsigned long long)ticketingSegmentsCount;

@end
