@class NSString, PBDataReader, GEOTransitPlaceCard;

@interface GEOPlaceActionDetails : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_actionUrl;
    unsigned long long _animationID;
    unsigned long long _businessID;
    NSString *_destinationApp;
    NSString *_photoId;
    long long _placeID;
    NSString *_richProviderId;
    double _searchResponseRelativeTimestamp;
    unsigned long long _targetID;
    GEOTransitPlaceCard *_transitPlaceCard;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _localSearchProviderID;
    int _resultIndex;
    struct { unsigned char has_animationID : 1; unsigned char has_businessID : 1; unsigned char has_placeID : 1; unsigned char has_searchResponseRelativeTimestamp : 1; unsigned char has_targetID : 1; unsigned char has_localSearchProviderID : 1; unsigned char has_resultIndex : 1; unsigned char read_actionUrl : 1; unsigned char read_destinationApp : 1; unsigned char read_photoId : 1; unsigned char read_richProviderId : 1; unsigned char read_transitPlaceCard : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasBusinessID;
@property (nonatomic) unsigned long long businessID;
@property (nonatomic) BOOL hasPlaceID;
@property (nonatomic) long long placeID;
@property (nonatomic) BOOL hasLocalSearchProviderID;
@property (nonatomic) int localSearchProviderID;
@property (nonatomic) BOOL hasSearchResponseRelativeTimestamp;
@property (nonatomic) double searchResponseRelativeTimestamp;
@property (nonatomic) BOOL hasResultIndex;
@property (nonatomic) int resultIndex;
@property (nonatomic) BOOL hasAnimationID;
@property (nonatomic) unsigned long long animationID;
@property (nonatomic) BOOL hasTargetID;
@property (nonatomic) unsigned long long targetID;
@property (readonly, nonatomic) BOOL hasPhotoId;
@property (retain, nonatomic) NSString *photoId;
@property (readonly, nonatomic) BOOL hasActionUrl;
@property (retain, nonatomic) NSString *actionUrl;
@property (readonly, nonatomic) BOOL hasTransitPlaceCard;
@property (retain, nonatomic) GEOTransitPlaceCard *transitPlaceCard;
@property (readonly, nonatomic) BOOL hasRichProviderId;
@property (retain, nonatomic) NSString *richProviderId;
@property (readonly, nonatomic) BOOL hasDestinationApp;
@property (retain, nonatomic) NSString *destinationApp;

+ (id)actionDetailsWithMapItem:(id)a0 childPlace:(id)a1 timestamp:(double)a2 resultIndex:(int)a3 targetID:(unsigned long long)a4 transitCardCategory:(int)a5 transitSystem:(id)a6 transitDepartureSequence:(id)a7 transitIncident:(id)a8;
+ (id)actionDetailsWithMapItem:(id)a0 timestamp:(double)a1 resultIndex:(int)a2 targetID:(unsigned long long)a3 transitCardCategory:(int)a4 transitSystem:(id)a5 transitDepartureSequence:(id)a6 transitIncident:(id)a7;
+ (id)actionDetailsWithDetails:(id)a0 timestamp:(double)a1;
+ (id)actionDetailsWithMapItem:(id)a0 timestamp:(double)a1 resultIndex:(int)a2 targetID:(unsigned long long)a3;
+ (id)actionDetailsWithTargetID:(unsigned long long)a0;
+ (id)actionDetailsWithMapItem:(id)a0 timestamp:(double)a1 resultIndex:(int)a2;
+ (id)actionDetailsWithChildPlace:(id)a0 timestamp:(double)a1 resultIndex:(int)a2;
+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithMapItem:(id)a0 childPlace:(id)a1 relativeTimestamp:(double)a2 resultIndex:(int)a3 targetID:(unsigned long long)a4 transitCardCategory:(int)a5 transitSystem:(id)a6 transitDepartureSequence:(id)a7 transitIncident:(id)a8;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithMapItem:(id)a0 relativeTimestamp:(double)a1 resultIndex:(int)a2 targetID:(unsigned long long)a3;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)initWithMapItem:(id)a0 relativeTimestamp:(double)a1 resultIndex:(int)a2;
- (id)dictionaryRepresentation;

@end
