@class NSString, NSMutableArray, PBDataReader;
@protocol GEOTransitArtworkDataSource;

@interface GEOCompanionGenericStep : PBCodable <GEOCompanionManeuverStep, NSCopying> {
    PBDataReader *_reader;
    struct GEOJunctionElement { int x0; int x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } *_junctionElements;
    unsigned long long _junctionElementsCount;
    unsigned long long _junctionElementsSpace;
    NSMutableArray *_maneuverNames;
    NSMutableArray *_signposts;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _junctionType;
    int _maneuverType;
    int _transportType;
    struct { unsigned char has_junctionType : 1; unsigned char has_maneuverType : 1; unsigned char has_transportType : 1; unsigned char read_junctionElements : 1; unsigned char read_maneuverNames : 1; unsigned char read_signposts : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasManeuverType;
@property (nonatomic) int maneuverType;
@property (retain, nonatomic) NSMutableArray *maneuverNames;
@property (retain, nonatomic) NSMutableArray *signposts;
@property (nonatomic) BOOL hasJunctionType;
@property (nonatomic) int junctionType;
@property (readonly, nonatomic) unsigned long long junctionElementsCount;
@property (readonly, nonatomic) struct GEOJunctionElement { int x0; int x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } *junctionElements;
@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> maneuverArtworkOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasManeuverType;
@property (nonatomic) int maneuverType;
@property (retain, nonatomic) NSMutableArray *maneuverNames;
@property (retain, nonatomic) NSMutableArray *signposts;
@property (nonatomic) BOOL hasJunctionType;
@property (nonatomic) int junctionType;
@property (readonly, nonatomic) unsigned long long junctionElementsCount;
@property (readonly, nonatomic) struct GEOJunctionElement { int x0; int x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } *junctionElements;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) int transportType;

+ (Class)maneuverNameType;
+ (Class)signpostType;
+ (id)genericStepForCyclingStep:(id)a0 protocolVersion:(unsigned long long)a1;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)maneuverTypeAsString:(int)a0;
- (int)StringAsManeuverType:(id)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (int)StringAsTransportType:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)transportTypeAsString:(int)a0;
- (void)clearJunctionElements;
- (void)addJunctionElement:(struct GEOJunctionElement { int x0; int x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; })a0;
- (void)addManeuverName:(id)a0;
- (void)addSignpost:(id)a0;
- (struct GEOJunctionElement { int x0; int x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; })junctionElementAtIndex:(unsigned long long)a0;
- (unsigned long long)maneuverNamesCount;
- (void)clearManeuverNames;
- (id)maneuverNameAtIndex:(unsigned long long)a0;
- (unsigned long long)signpostsCount;
- (void)clearSignposts;
- (id)signpostAtIndex:(unsigned long long)a0;
- (id)junctionTypeAsString:(int)a0;
- (int)StringAsJunctionType:(id)a0;
- (void)setJunctionElements:(struct GEOJunctionElement { int x0; int x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } *)a0 count:(unsigned long long)a1;

@end
