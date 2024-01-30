@class PBDataReader, NSArray, NSString, GEOFormattedString, NSMutableArray, PBUnknownFields;
@protocol GEOServerFormattedString;

@interface GEOTransitRouteDisplayStrings : PBCodable <GEOComposedRouteTransitDisplayStrings, NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_advisorys;
    GEOFormattedString *_badge;
    GEOFormattedString *_durationList;
    GEOFormattedString *_duration;
    GEOFormattedString *_planningDescription;
    GEOFormattedString *_travelDescription;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_advisorys : 1; unsigned char read_badge : 1; unsigned char read_durationList : 1; unsigned char read_duration : 1; unsigned char read_planningDescription : 1; unsigned char read_travelDescription : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) id<GEOServerFormattedString> previewDurationFormatString;
@property (readonly, nonatomic) id<GEOServerFormattedString> pickingDurationFormatString;
@property (readonly, nonatomic) id<GEOServerFormattedString> planningDescriptionFormatString;
@property (readonly, nonatomic) id<GEOServerFormattedString> transitDescriptionFormatString;
@property (readonly, nonatomic) NSArray *transitAdvisories;
@property (readonly, nonatomic) id<GEOServerFormattedString> transitRouteBadge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasPlanningDescription;
@property (retain, nonatomic) GEOFormattedString *planningDescription;
@property (readonly, nonatomic) BOOL hasDuration;
@property (retain, nonatomic) GEOFormattedString *duration;
@property (readonly, nonatomic) BOOL hasDurationList;
@property (retain, nonatomic) GEOFormattedString *durationList;
@property (readonly, nonatomic) BOOL hasTravelDescription;
@property (retain, nonatomic) GEOFormattedString *travelDescription;
@property (retain, nonatomic) NSMutableArray *advisorys;
@property (readonly, nonatomic) BOOL hasBadge;
@property (retain, nonatomic) GEOFormattedString *badge;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)advisoryType;

- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)addAdvisory:(id)a0;
- (unsigned long long)advisorysCount;
- (void)clearAdvisorys;
- (id)advisoryAtIndex:(unsigned long long)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)dictionaryRepresentation;

@end
