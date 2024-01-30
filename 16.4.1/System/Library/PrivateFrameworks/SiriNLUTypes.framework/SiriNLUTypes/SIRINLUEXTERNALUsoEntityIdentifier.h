@class NSString, SIRICOMMONDoubleValue, SIRICOMMONStringValue;

@interface SIRINLUEXTERNALUsoEntityIdentifier : PBCodable <NSCopying> {
    struct { unsigned char groupIndex : 1; unsigned char interpretationGroup : 1; unsigned char nodeIndex : 1; unsigned char sourceComponent : 1; } _has;
}

@property (nonatomic) BOOL hasNodeIndex;
@property (nonatomic) unsigned int nodeIndex;
@property (readonly, nonatomic) BOOL hasBackingAppBundleId;
@property (retain, nonatomic) NSString *backingAppBundleId;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) NSString *value;
@property (readonly, nonatomic) BOOL hasNamespaceA;
@property (retain, nonatomic) SIRICOMMONStringValue *namespaceA;
@property (readonly, nonatomic) BOOL hasProbability;
@property (retain, nonatomic) SIRICOMMONDoubleValue *probability;
@property (nonatomic) BOOL hasSourceComponent;
@property (nonatomic) int sourceComponent;
@property (nonatomic) BOOL hasGroupIndex;
@property (nonatomic) unsigned int groupIndex;
@property (nonatomic) BOOL hasInterpretationGroup;
@property (nonatomic) unsigned int interpretationGroup;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsSourceComponent:(id)a0;
- (id)sourceComponentAsString:(int)a0;

@end
