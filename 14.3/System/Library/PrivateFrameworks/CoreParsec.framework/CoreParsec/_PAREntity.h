@class NSString, NSArray, NSData;

@interface _PAREntity : PBCodable <_PAREntity, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float probabilityScore;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int category;
@property (copy, nonatomic) NSArray *topics;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithJSON:(id)a0;
- (void)addTopics:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)clearTopics;
- (unsigned long long)topicsCount;
- (id)topicsAtIndex:(unsigned long long)a0;

@end
