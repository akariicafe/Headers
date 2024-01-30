@class _SFPBCollectionStyleHorizontallyScrolling, NSString, _SFPBCollectionStyleGrid, NSData, _SFPBCollectionStyleRow;

@interface _SFPBCollectionStyle : PBCodable <_SFPBCollectionStyle, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBCollectionStyleRow *collectionStyleRow;
@property (retain, nonatomic) _SFPBCollectionStyleGrid *collectionStyleGrid;
@property (retain, nonatomic) _SFPBCollectionStyleHorizontallyScrolling *collectionStyleScrolling;
@property (nonatomic) unsigned int initiallyVisibleCardSectionCount;
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
