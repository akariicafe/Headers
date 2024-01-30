@class NSData, _SFPBContactImage, NSString, _SFPBPointSize, _SFPBCalendarImage, _SFPBMediaArtworkImage, _SFPBAppIconImage, _SFPBLocalImage, _SFPBURLImage, _SFPBGraphicalFloat, _SFPBSymbolImage, _SFPBMonogramImage;

@interface _SFPBImage : PBCodable <_SFPBImage, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSData *imageData;
@property (nonatomic) BOOL isTemplate;
@property (nonatomic) BOOL shouldCropToCircle;
@property (retain, nonatomic) _SFPBGraphicalFloat *cornerRadius;
@property (retain, nonatomic) _SFPBGraphicalFloat *scale;
@property (retain, nonatomic) _SFPBPointSize *size;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *keyColor;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) int source;
@property (nonatomic) int cornerRoundingStyle;
@property (nonatomic) int type;
@property (retain, nonatomic) _SFPBURLImage *urlImage;
@property (retain, nonatomic) _SFPBContactImage *contactImage;
@property (retain, nonatomic) _SFPBMonogramImage *monogramImage;
@property (retain, nonatomic) _SFPBLocalImage *localImage;
@property (retain, nonatomic) _SFPBAppIconImage *appIconImage;
@property (retain, nonatomic) _SFPBMediaArtworkImage *mediaArtworkImage;
@property (retain, nonatomic) _SFPBCalendarImage *calendarImage;
@property (retain, nonatomic) _SFPBSymbolImage *symbolImage;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)initWithFacade:(id)a0;

@end
