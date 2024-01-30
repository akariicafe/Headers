@class PBDataReader, NSArray, NSString, GEOFormattedStringMetaData, GEOConditionalFormattedString, NSMutableArray, PBUnknownFields;
@protocol GEOServerConditionalString;

@interface GEOFormattedString : PBCodable <GEOServerFormattedString, NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOConditionalFormattedString *_alternativeString;
    NSMutableArray *_formatArguments;
    NSMutableArray *_formatStrings;
    NSMutableArray *_formatStyles;
    GEOFormattedStringMetaData *_metaData;
    NSMutableArray *_separators;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_alternativeString : 1; unsigned char read_formatArguments : 1; unsigned char read_formatStrings : 1; unsigned char read_formatStyles : 1; unsigned char read_metaData : 1; unsigned char read_separators : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) NSArray *formatStrings;
@property (readonly, nonatomic) NSArray *formatTokens;
@property (readonly, nonatomic) NSArray *separators;
@property (readonly, nonatomic) NSArray *formatStyles;
@property (readonly, nonatomic) id<GEOServerConditionalString> alternativeString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *formatStrings;
@property (retain, nonatomic) NSMutableArray *formatArguments;
@property (retain, nonatomic) NSMutableArray *separators;
@property (retain, nonatomic) NSMutableArray *formatStyles;
@property (readonly, nonatomic) BOOL hasAlternativeString;
@property (retain, nonatomic) GEOConditionalFormattedString *alternativeString;
@property (readonly, nonatomic) BOOL hasMetaData;
@property (retain, nonatomic) GEOFormattedStringMetaData *metaData;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)formatStringType;
+ (Class)formatArgumentType;
+ (Class)separatorType;
+ (Class)formatStyleType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithString:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)addFormatString:(id)a0;
- (void)addFormatArgument:(id)a0;
- (void)addSeparator:(id)a0;
- (void)addFormatStyle:(id)a0;
- (unsigned long long)formatStringsCount;
- (void)clearFormatStrings;
- (unsigned long long)separatorsCount;
- (id)formatStringAtIndex:(unsigned long long)a0;
- (unsigned long long)formatArgumentsCount;
- (void)clearFormatArguments;
- (id)formatArgumentAtIndex:(unsigned long long)a0;
- (void)clearSeparators;
- (id)separatorAtIndex:(unsigned long long)a0;
- (unsigned long long)formatStylesCount;
- (void)clearFormatStyles;
- (id)formatStyleAtIndex:(unsigned long long)a0;
- (void)readAll:(BOOL)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
