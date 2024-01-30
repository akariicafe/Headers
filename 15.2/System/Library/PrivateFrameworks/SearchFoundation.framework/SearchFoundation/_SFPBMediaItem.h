@class NSString, _SFPBImage, NSArray, _SFPBPunchout, NSData, _SFPBText;

@interface _SFPBMediaItem : PBCodable <_SFPBMediaItem, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) _SFPBText *subtitleText;
@property (retain, nonatomic) _SFPBImage *thumbnail;
@property (retain, nonatomic) _SFPBImage *reviewGlyph;
@property (retain, nonatomic) _SFPBImage *overlayImage;
@property (copy, nonatomic) NSString *reviewText;
@property (retain, nonatomic) _SFPBPunchout *punchout;
@property (copy, nonatomic) NSArray *subtitleCustomLineBreakings;
@property (copy, nonatomic) NSArray *buyOptions;
@property (copy, nonatomic) NSString *contentAdvisory;
@property (retain, nonatomic) _SFPBImage *contentAdvisoryImage;
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
- (void)setSubtitleCustomLineBreaking:(id)a0;
- (id)dictionaryRepresentation;
- (void)addSubtitleCustomLineBreaking:(id)a0;
- (void)addBuyOptions:(id)a0;
- (void)clearSubtitleCustomLineBreaking;
- (unsigned long long)subtitleCustomLineBreakingCount;
- (id)subtitleCustomLineBreakingAtIndex:(unsigned long long)a0;
- (void)clearBuyOptions;
- (unsigned long long)buyOptionsCount;
- (id)buyOptionsAtIndex:(unsigned long long)a0;

@end
