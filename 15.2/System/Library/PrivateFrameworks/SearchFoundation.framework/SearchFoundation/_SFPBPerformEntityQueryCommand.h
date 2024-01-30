@class NSString, _SFPBSymbolImage, NSData;

@interface _SFPBPerformEntityQueryCommand : PBCodable <_SFPBPerformEntityQueryCommand, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *searchString;
@property (copy, nonatomic) NSString *tokenString;
@property (retain, nonatomic) _SFPBSymbolImage *symbolImage;
@property (nonatomic) int entityType;
@property (copy, nonatomic) NSString *entityIdentifier;
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
