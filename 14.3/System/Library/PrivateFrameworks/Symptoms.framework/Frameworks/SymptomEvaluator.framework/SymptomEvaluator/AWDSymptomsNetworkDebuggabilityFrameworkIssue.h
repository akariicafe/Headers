@class NSMutableArray;

@interface AWDSymptomsNetworkDebuggabilityFrameworkIssue : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _ndfAppSymptoms;
    struct { int *list; unsigned long long count; unsigned long long size; } _ndfNetworkTypes;
    struct { unsigned char ndfCount : 1; unsigned char ndfDampeningFactor : 1; unsigned char ndfDuration : 1; unsigned char ndfLQM : 1; unsigned char ndfSymptomPoint : 1; unsigned char timestamp : 1; unsigned char ndfSessionType : 1; unsigned char ndfTriggerType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) unsigned long long ndfNetworkTypesCount;
@property (readonly, nonatomic) int *ndfNetworkTypes;
@property (nonatomic) BOOL hasNdfCount;
@property (nonatomic) unsigned long long ndfCount;
@property (nonatomic) BOOL hasNdfDuration;
@property (nonatomic) unsigned long long ndfDuration;
@property (nonatomic) BOOL hasNdfDampeningFactor;
@property (nonatomic) unsigned long long ndfDampeningFactor;
@property (nonatomic) BOOL hasNdfTriggerType;
@property (nonatomic) int ndfTriggerType;
@property (retain, nonatomic) NSMutableArray *ndfAppNames;
@property (readonly, nonatomic) unsigned long long ndfAppSymptomsCount;
@property (readonly, nonatomic) int *ndfAppSymptoms;
@property (nonatomic) BOOL hasNdfLQM;
@property (nonatomic) long long ndfLQM;
@property (nonatomic) BOOL hasNdfSessionType;
@property (nonatomic) int ndfSessionType;
@property (retain, nonatomic) NSMutableArray *ndfSignatures;
@property (nonatomic) BOOL hasNdfSymptomPoint;
@property (nonatomic) long long ndfSymptomPoint;

+ (Class)ndfAppNameType;
+ (Class)ndfSignatureType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addNdfAppName:(id)a0;
- (void)addNdfSignature:(id)a0;
- (void)clearNdfNetworkTypes;
- (int)ndfNetworkTypeAtIndex:(unsigned long long)a0;
- (void)addNdfNetworkType:(int)a0;
- (unsigned long long)ndfAppNamesCount;
- (void)clearNdfAppNames;
- (id)ndfAppNameAtIndex:(unsigned long long)a0;
- (void)clearNdfAppSymptoms;
- (int)ndfAppSymptomAtIndex:(unsigned long long)a0;
- (void)addNdfAppSymptom:(int)a0;
- (unsigned long long)ndfSignaturesCount;
- (void)clearNdfSignatures;
- (id)ndfSignatureAtIndex:(unsigned long long)a0;
- (void)setNdfNetworkTypes:(int *)a0 count:(unsigned long long)a1;
- (id)ndfNetworkTypesAsString:(int)a0;
- (int)StringAsNdfNetworkTypes:(id)a0;
- (id)ndfTriggerTypeAsString:(int)a0;
- (int)StringAsNdfTriggerType:(id)a0;
- (void)setNdfAppSymptoms:(int *)a0 count:(unsigned long long)a1;
- (id)ndfAppSymptomsAsString:(int)a0;
- (int)StringAsNdfAppSymptoms:(id)a0;
- (id)ndfSessionTypeAsString:(int)a0;
- (int)StringAsNdfSessionType:(id)a0;

@end
