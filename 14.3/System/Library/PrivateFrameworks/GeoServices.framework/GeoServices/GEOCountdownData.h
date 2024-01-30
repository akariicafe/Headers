@class PBDataReader, NSArray, NSDictionary, NSString, NSMutableArray, PBUnknownFields;

@interface GEOCountdownData : PBCodable <GEOServerFormatTokenCountdownValue, NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _alternateCountdownTypes;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _timestampValues;
    NSMutableArray *_alternateFormatStrings;
    NSString *_separator;
    NSString *_timezone;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_alternateCountdownTypes : 1; unsigned char read_timestampValues : 1; unsigned char read_alternateFormatStrings : 1; unsigned char read_separator : 1; unsigned char read_timezone : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) long long countdownType;
@property (readonly, nonatomic) NSArray *timestamps;
@property (readonly, nonatomic) NSDictionary *alternativeFormatStringsByType;
@property (readonly, nonatomic) NSString *separator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long timestampValuesCount;
@property (readonly, nonatomic) unsigned int *timestampValues;
@property (retain, nonatomic) NSMutableArray *alternateFormatStrings;
@property (readonly, nonatomic) unsigned long long alternateCountdownTypesCount;
@property (readonly, nonatomic) int *alternateCountdownTypes;
@property (readonly, nonatomic) BOOL hasSeparator;
@property (retain, nonatomic) NSString *separator;
@property (readonly, nonatomic) BOOL hasTimezone;
@property (retain, nonatomic) NSString *timezone;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)alternateFormatStringType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)addTimestampValue:(unsigned int)a0;
- (void)addAlternateFormatString:(id)a0;
- (void)addAlternateCountdownType:(int)a0;
- (void)clearTimestampValues;
- (unsigned int)timestampValueAtIndex:(unsigned long long)a0;
- (unsigned long long)alternateFormatStringsCount;
- (void)clearAlternateFormatStrings;
- (id)alternateFormatStringAtIndex:(unsigned long long)a0;
- (void)clearAlternateCountdownTypes;
- (int)alternateCountdownTypeAtIndex:(unsigned long long)a0;
- (void)dealloc;
- (void)setTimestampValues:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setAlternateCountdownTypes:(int *)a0 count:(unsigned long long)a1;
- (id)alternateCountdownTypesAsString:(int)a0;
- (int)StringAsAlternateCountdownTypes:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (long long)_convertFrom:(int)a0;

@end
