@class NSString, GEOFormattedString, NSDate, PBUnknownFields;
@protocol GEOServerFormattedString;

@interface GEOTransitServiceGap : PBCodable <GEOServiceGap, NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_displayMessage;
    unsigned int _absEndTime;
    unsigned int _absStartTime;
    unsigned int _appearsBeforeSuggestedRouteIndex;
    struct { unsigned char has_absEndTime : 1; unsigned char has_absStartTime : 1; unsigned char has_appearsBeforeSuggestedRouteIndex : 1; } _flags;
}

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) unsigned long long routeListInsertBeforeIndex;
@property (readonly, nonatomic) id<GEOServerFormattedString> displayMessagFormatString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasAppearsBeforeSuggestedRouteIndex;
@property (nonatomic) unsigned int appearsBeforeSuggestedRouteIndex;
@property (nonatomic) BOOL hasAbsStartTime;
@property (nonatomic) unsigned int absStartTime;
@property (nonatomic) BOOL hasAbsEndTime;
@property (nonatomic) unsigned int absEndTime;
@property (readonly, nonatomic) BOOL hasDisplayMessage;
@property (retain, nonatomic) GEOFormattedString *displayMessage;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;

@end
