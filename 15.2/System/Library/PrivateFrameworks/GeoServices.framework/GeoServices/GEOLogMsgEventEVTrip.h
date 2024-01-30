@class NSString, NSMutableArray, PBDataReader;

@interface GEOLogMsgEventEVTrip : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_chargeLocationDetails;
    NSString *_metro;
    NSMutableArray *_stopAddedDetails;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _outOfCharge;
    BOOL _outOfRangeAlertDisplayed;
    struct { unsigned char has_outOfCharge : 1; unsigned char has_outOfRangeAlertDisplayed : 1; unsigned char read_chargeLocationDetails : 1; unsigned char read_metro : 1; unsigned char read_stopAddedDetails : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasOutOfCharge;
@property (nonatomic) BOOL outOfCharge;
@property (nonatomic) BOOL hasOutOfRangeAlertDisplayed;
@property (nonatomic) BOOL outOfRangeAlertDisplayed;
@property (retain, nonatomic) NSMutableArray *chargeLocationDetails;
@property (retain, nonatomic) NSMutableArray *stopAddedDetails;
@property (readonly, nonatomic) BOOL hasMetro;
@property (retain, nonatomic) NSString *metro;

+ (BOOL)isValid:(id)a0;
+ (Class)stopAddedDetailsType;
+ (Class)chargeLocationDetailsType;

- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)addChargeLocationDetails:(id)a0;
- (void)addStopAddedDetails:(id)a0;
- (unsigned long long)chargeLocationDetailsCount;
- (void)clearChargeLocationDetails;
- (unsigned long long)stopAddedDetailsCount;
- (id)chargeLocationDetailsAtIndex:(unsigned long long)a0;
- (void)clearStopAddedDetails;
- (id)stopAddedDetailsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
