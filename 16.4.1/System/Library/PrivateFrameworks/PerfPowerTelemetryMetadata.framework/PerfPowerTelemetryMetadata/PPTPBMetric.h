@class PPTPBUnit, NSString, PPTPBSource, PPTPBCadence, PPTPBRounding;

@interface PPTPBMetric : PBCodable <NSCopying> {
    struct { unsigned char version : 1; unsigned char datatype : 1; unsigned char deviceCapability : 1; unsigned char directionality : 1; unsigned char enabledPopulation : 1; unsigned char mode : 1; unsigned char obfuscation : 1; unsigned char privacyClassification : 1; unsigned char storage : 1; unsigned char timeToLive : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasSubsystem;
@property (retain, nonatomic) NSString *subsystem;
@property (readonly, nonatomic) BOOL hasCategory;
@property (retain, nonatomic) NSString *category;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) double version;
@property (nonatomic) BOOL hasDatatype;
@property (nonatomic) int datatype;
@property (readonly, nonatomic) BOOL hasUnit;
@property (retain, nonatomic) PPTPBUnit *unit;
@property (readonly, nonatomic) BOOL hasCadence;
@property (retain, nonatomic) PPTPBCadence *cadence;
@property (nonatomic) BOOL hasDirectionality;
@property (nonatomic) int directionality;
@property (nonatomic) BOOL hasStorage;
@property (nonatomic) int storage;
@property (nonatomic) BOOL hasTimeToLive;
@property (nonatomic) unsigned int timeToLive;
@property (nonatomic) BOOL hasMode;
@property (nonatomic) int mode;
@property (readonly, nonatomic) BOOL hasSource;
@property (retain, nonatomic) PPTPBSource *source;
@property (nonatomic) BOOL hasDeviceCapability;
@property (nonatomic) int deviceCapability;
@property (nonatomic) BOOL hasEnabledPopulation;
@property (nonatomic) int enabledPopulation;
@property (readonly, nonatomic) BOOL hasRounding;
@property (retain, nonatomic) PPTPBRounding *rounding;
@property (nonatomic) BOOL hasObfuscation;
@property (nonatomic) int obfuscation;
@property (readonly, nonatomic) BOOL hasMetricDescription;
@property (retain, nonatomic) NSString *metricDescription;
@property (readonly, nonatomic) BOOL hasExampleValue;
@property (retain, nonatomic) NSString *exampleValue;
@property (readonly, nonatomic) BOOL hasBuild;
@property (retain, nonatomic) NSString *build;
@property (nonatomic) BOOL hasPrivacyClassification;
@property (nonatomic) int privacyClassification;

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

@end
