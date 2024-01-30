@class _SFPBGraphicalFloat, NSData, NSString;

@interface _SFPBColor : PBCodable <_SFPBColor, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBGraphicalFloat *redComponent;
@property (retain, nonatomic) _SFPBGraphicalFloat *greenComponent;
@property (retain, nonatomic) _SFPBGraphicalFloat *blueComponent;
@property (retain, nonatomic) _SFPBGraphicalFloat *alphaComponent;
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
