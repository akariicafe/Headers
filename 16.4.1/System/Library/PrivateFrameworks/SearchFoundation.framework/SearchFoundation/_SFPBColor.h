@class _SFPBCalendarColor, NSString, _SFPBAppColor, NSData, _SFPBGraphicalFloat;

@interface _SFPBColor : PBCodable <_SFPBColor, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBGraphicalFloat *redComponent;
@property (retain, nonatomic) _SFPBGraphicalFloat *greenComponent;
@property (retain, nonatomic) _SFPBGraphicalFloat *blueComponent;
@property (retain, nonatomic) _SFPBGraphicalFloat *alphaComponent;
@property (retain, nonatomic) _SFPBCalendarColor *calendarColor;
@property (retain, nonatomic) _SFPBAppColor *appColor;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichValue;
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
