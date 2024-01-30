@class NSString, NSArray, NSDate, NSMutableArray, PBUnknownFields;

@interface MSPTransitStorageIncident : PBCodable <GEOTransitIncident, NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char muid : 1; unsigned char creationDatetime : 1; unsigned char endDatetime : 1; unsigned char iconType : 1; unsigned char lastUpdatedDatetime : 1; unsigned char startDatetime : 1; unsigned char blockingIncident : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *summary;
@property (readonly, nonatomic) NSString *fullDescription;
@property (readonly, nonatomic) NSString *messageForRoutePlanning;
@property (readonly, nonatomic) NSString *messageForRouteStepping;
@property (readonly, nonatomic) NSString *messageForNonRoutable;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) int iconType;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *lastUpdated;
@property (readonly, nonatomic, getter=isBlockingIncident) BOOL blockingIncident;
@property (readonly, nonatomic) NSArray *affectedEntities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) unsigned long long muid;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasSummary;
@property (retain, nonatomic) NSString *summary;
@property (readonly, nonatomic) BOOL hasFullDescription;
@property (retain, nonatomic) NSString *fullDescription;
@property (readonly, nonatomic) BOOL hasMessageForRoutePlanning;
@property (retain, nonatomic) NSString *messageForRoutePlanning;
@property (readonly, nonatomic) BOOL hasMessageForRouteStepping;
@property (retain, nonatomic) NSString *messageForRouteStepping;
@property (readonly, nonatomic) BOOL hasMessageForNonRoutable;
@property (retain, nonatomic) NSString *messageForNonRoutable;
@property (nonatomic) BOOL hasStartDatetime;
@property (nonatomic) unsigned int startDatetime;
@property (nonatomic) BOOL hasEndDatetime;
@property (nonatomic) unsigned int endDatetime;
@property (nonatomic) BOOL hasIconType;
@property (nonatomic) int iconType;
@property (nonatomic) BOOL hasCreationDatetime;
@property (nonatomic) unsigned int creationDatetime;
@property (nonatomic) BOOL hasLastUpdatedDatetime;
@property (nonatomic) unsigned int lastUpdatedDatetime;
@property (nonatomic) BOOL hasBlockingIncident;
@property (nonatomic) BOOL blockingIncident;
@property (retain, nonatomic) NSMutableArray *affectedEntities;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)affectedEntitiesType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)iconTypeAsString:(int)a0;
- (int)StringAsIconType:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithIncident:(id)a0;
- (void)addAffectedEntities:(id)a0;
- (unsigned long long)affectedEntitiesCount;
- (void)clearAffectedEntities;
- (id)affectedEntitiesAtIndex:(unsigned long long)a0;

@end
