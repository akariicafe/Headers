@class NSString, _SFPBLatLng, NSData, _SFPBColor;

@interface _SFPBPin : PBCodable <_SFPBPin, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBLatLng *location;
@property (retain, nonatomic) _SFPBColor *pinColor;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *resultID;
@property (copy, nonatomic) NSData *mapsData;
@property (nonatomic) int pinBehavior;
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
