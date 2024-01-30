@class NSString, NSData;

@interface USOSchemaUSOEntityIdentifier : SISchemaInstrumentationMessage {
    struct { unsigned char nodeIndex : 1; unsigned char probability : 1; unsigned char sourceNluComponent : 1; unsigned char backingAppBundleType : 1; unsigned char groupIndex : 1; unsigned char interpretationGroup : 1; } _has;
}

@property (nonatomic) unsigned int nodeIndex;
@property (nonatomic) BOOL hasNodeIndex;
@property (copy, nonatomic) NSString *identifierNamespace;
@property (nonatomic) BOOL hasIdentifierNamespace;
@property (nonatomic) double probability;
@property (nonatomic) BOOL hasProbability;
@property (nonatomic) int sourceNluComponent;
@property (nonatomic) BOOL hasSourceNluComponent;
@property (nonatomic) int backingAppBundleType;
@property (nonatomic) BOOL hasBackingAppBundleType;
@property (nonatomic) unsigned int groupIndex;
@property (nonatomic) BOOL hasGroupIndex;
@property (nonatomic) unsigned int interpretationGroup;
@property (nonatomic) BOOL hasInterpretationGroup;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)deleteNodeIndex;
- (void)deleteBackingAppBundleType;
- (void)deleteGroupIndex;
- (void)deleteIdentifierNamespace;
- (void)deleteInterpretationGroup;
- (void)deleteProbability;
- (void)deleteSourceNluComponent;

@end
