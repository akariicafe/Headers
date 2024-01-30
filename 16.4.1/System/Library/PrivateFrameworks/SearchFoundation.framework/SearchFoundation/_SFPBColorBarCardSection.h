@class NSString, _SFPBRichText, NSData, _SFPBColor;

@interface _SFPBColorBarCardSection : PBCodable <_SFPBColorBarCardSection, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBColor *barColor;
@property (retain, nonatomic) _SFPBRichText *topText;
@property (retain, nonatomic) _SFPBRichText *title;
@property (retain, nonatomic) _SFPBRichText *subtitle;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;

@end
