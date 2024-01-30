@class NSString, NSData;

@interface _SFPBMediaArtworkImage : PBCodable <_SFPBMediaArtworkImage, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *persistentID;
@property (copy, nonatomic) NSString *spotlightIdentifier;
@property (nonatomic) int mediaEntityType;
@property (copy, nonatomic) NSString *universalLibraryID;
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
