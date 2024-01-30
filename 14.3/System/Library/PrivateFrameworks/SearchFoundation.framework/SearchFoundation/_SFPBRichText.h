@class _SFPBText, NSString, NSArray, NSData, _SFPBGraphicalFloat;

@interface _SFPBRichText : PBCodable <_SFPBRichText, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBText *text;
@property (retain, nonatomic) _SFPBGraphicalFloat *starRating;
@property (copy, nonatomic) NSString *contentAdvisory;
@property (copy, nonatomic) NSArray *icons;
@property (copy, nonatomic) NSArray *formattedTextPieces;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (unsigned long long)iconsCount;
- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (void)addIcons:(id)a0;
- (void)clearIcons;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)iconsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)initWithFacade:(id)a0;
- (void)addFormattedTextPieces:(id)a0;
- (void)clearFormattedTextPieces;
- (unsigned long long)formattedTextPiecesCount;
- (id)formattedTextPiecesAtIndex:(unsigned long long)a0;

@end
