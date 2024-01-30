@class NSString, _PARQueryFeatures_Stats, NSData;

@interface _PARSearchResponse_QueryFeatures : PBCodable <_PARSearchResponse_QueryFeatures, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *query;
@property (retain, nonatomic) _PARQueryFeatures_Stats *stats;
@property (nonatomic) BOOL topDown;
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

@end
