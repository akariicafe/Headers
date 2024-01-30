@class PBDataReader, NSArray, NSString, GEOFormattedString, GEOTransitListTimeInstruction, NSMutableArray, PBUnknownFields;

@interface GEOTransitListInstruction : PBCodable <GEOComposedRouteStepTransitInstructionMerging, NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_commandFormatteds;
    NSMutableArray *_detailFormatteds;
    GEOFormattedString *_expandableListFormatted;
    NSMutableArray *_noticeFormatteds;
    NSMutableArray *_priceFormatteds;
    GEOTransitListTimeInstruction *_timeInstructions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_commandFormatteds : 1; unsigned char read_detailFormatteds : 1; unsigned char read_expandableListFormatted : 1; unsigned char read_noticeFormatteds : 1; unsigned char read_priceFormatteds : 1; unsigned char read_timeInstructions : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) NSArray *serverFormattedCommands;
@property (readonly, nonatomic) NSArray *serverFormattedDetails;
@property (readonly, nonatomic) NSArray *serverFormattedNotices;
@property (readonly, nonatomic) NSArray *serverFormattedPrices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *noticeFormatteds;
@property (retain, nonatomic) NSMutableArray *commandFormatteds;
@property (retain, nonatomic) NSMutableArray *detailFormatteds;
@property (retain, nonatomic) NSMutableArray *priceFormatteds;
@property (readonly, nonatomic) BOOL hasExpandableListFormatted;
@property (retain, nonatomic) GEOFormattedString *expandableListFormatted;
@property (readonly, nonatomic) BOOL hasTimeInstructions;
@property (retain, nonatomic) GEOTransitListTimeInstruction *timeInstructions;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)noticeFormattedType;
+ (Class)commandFormattedType;
+ (Class)detailFormattedType;
+ (Class)priceFormattedType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (void)addNoticeFormatted:(id)a0;
- (void)addCommandFormatted:(id)a0;
- (void)addDetailFormatted:(id)a0;
- (void)addPriceFormatted:(id)a0;
- (unsigned long long)noticeFormattedsCount;
- (void)clearNoticeFormatteds;
- (id)noticeFormattedAtIndex:(unsigned long long)a0;
- (unsigned long long)commandFormattedsCount;
- (unsigned long long)detailFormattedsCount;
- (void)clearCommandFormatteds;
- (id)commandFormattedAtIndex:(unsigned long long)a0;
- (void)clearDetailFormatteds;
- (unsigned long long)priceFormattedsCount;
- (id)detailFormattedAtIndex:(unsigned long long)a0;
- (void)clearPriceFormatteds;
- (id)priceFormattedAtIndex:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0;
- (void)_transit_prepareForDeepMergeFrom:(id)a0;

@end
