@class NSArray, NSData, NSString;

@interface _SFPBTextColumnSection : PBCodable <_SFPBTextColumnSection, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *textLines;
@property (nonatomic) BOOL textNoWrap;
@property (nonatomic) unsigned int textWeight;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)addTextLines:(id)a0;
- (void)clearTextLines;
- (unsigned long long)textLinesCount;
- (id)textLinesAtIndex:(unsigned long long)a0;

@end
