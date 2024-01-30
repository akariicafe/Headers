@class NSString, NSArray, NSData;

@interface _PARSearchResponse_Section : PBCodable <_PARSearchResponse_Section, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *moreLabel;
@property (copy, nonatomic) NSString *moreUrl;
@property (copy, nonatomic) NSString *morePunchout;
@property (nonatomic) int blockId;
@property (nonatomic) BOOL doNotFold;
@property (copy, nonatomic) NSArray *resultIdentifiers;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichMore;
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
- (void)addResultIdentifiers:(id)a0;
- (void)clearResultIdentifiers;
- (unsigned long long)resultIdentifiersCount;
- (id)resultIdentifiersAtIndex:(unsigned long long)a0;

@end
