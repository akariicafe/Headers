@class NSArray, NSString, NSData;

@interface _SFPBContactImage : PBCodable <_SFPBContactImage, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *contactIdentifiers;
@property (nonatomic) BOOL threeDTouchEnabled;
@property (copy, nonatomic) NSString *appIconBadgeBundleIdentifier;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)clearContactIdentifiers;
- (void)addContactIdentifiers:(id)a0;
- (id)contactIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)contactIdentifiersCount;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)initWithFacade:(id)a0;

@end
