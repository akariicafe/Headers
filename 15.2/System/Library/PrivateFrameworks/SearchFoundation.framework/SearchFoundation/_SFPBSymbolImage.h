@class NSString, NSData;

@interface _SFPBSymbolImage : PBCodable <_SFPBSymbolImage, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *symbolName;
@property (nonatomic) BOOL punchThroughBackground;
@property (nonatomic) int backgroundColor;
@property (nonatomic) int primaryColor;
@property (nonatomic) int secondaryColor;
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

@end
