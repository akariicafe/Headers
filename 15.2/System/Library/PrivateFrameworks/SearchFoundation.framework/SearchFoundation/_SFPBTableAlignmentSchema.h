@class NSArray, NSString, NSData, _SFPBStringDictionary;

@interface _SFPBTableAlignmentSchema : PBCodable <_SFPBTableAlignmentSchema, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *tableColumnAlignments;
@property (retain, nonatomic) _SFPBStringDictionary *metadata;
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
- (void)setTableColumnAlignment:(id)a0;
- (id)dictionaryRepresentation;
- (void)addTableColumnAlignment:(id)a0;
- (void)clearTableColumnAlignment;
- (unsigned long long)tableColumnAlignmentCount;
- (id)tableColumnAlignmentAtIndex:(unsigned long long)a0;

@end
