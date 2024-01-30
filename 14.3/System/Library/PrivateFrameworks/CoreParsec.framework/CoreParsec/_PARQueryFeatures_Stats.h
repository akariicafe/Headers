@class NSArray, NSData, NSString;

@interface _PARQueryFeatures_Stats : PBCodable <_PARQueryFeatures_Stats, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *Ceps;
@property (copy, nonatomic) NSArray *CepLongs;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithJSON:(id)a0;
- (void)addCepLong:(id)a0;
- (id)CepAtIndex:(unsigned long long)a0;
- (void)clearCepLong;
- (unsigned long long)CepLongCount;
- (id)CepLongAtIndex:(unsigned long long)a0;
- (void)setCepLong:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)addCep:(id)a0;
- (void)setCep:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearCep;
- (unsigned long long)CepCount;
- (id)initWithDictionary:(id)a0;

@end
