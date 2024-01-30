@class NSArray, NSData, NSString;

@interface _SFPBProductAvailability : PBCodable <_SFPBProductAvailability, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *results;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)addResults:(id)a0;
- (unsigned long long)resultsCount;
- (id)resultsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearResults;
- (id)initWithDictionary:(id)a0;
- (id)initWithFacade:(id)a0;

@end
