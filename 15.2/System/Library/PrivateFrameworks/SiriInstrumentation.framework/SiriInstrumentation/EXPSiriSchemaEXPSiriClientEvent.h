@class EXPSiriSchemaEXPAllocationSnapshot, EXPSiriSchemaEXPAllocationChangelogSnapshot, NSData;

@interface EXPSiriSchemaEXPSiriClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) EXPSiriSchemaEXPAllocationSnapshot *allocationSnapshot;
@property (nonatomic) BOOL hasAllocationSnapshot;
@property (retain, nonatomic) EXPSiriSchemaEXPAllocationChangelogSnapshot *allocationChangelogSnapshot;
@property (nonatomic) BOOL hasAllocationChangelogSnapshot;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (BOOL)readFrom:(id)a0;
- (id)qualifiedMessageName;
- (int)getAnyEventType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
