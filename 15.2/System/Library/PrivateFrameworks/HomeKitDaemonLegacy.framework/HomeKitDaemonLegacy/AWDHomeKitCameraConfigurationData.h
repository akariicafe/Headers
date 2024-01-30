@class NSMutableArray;

@interface AWDHomeKitCameraConfigurationData : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char isDemoConfiguration : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *homeConfigurations;
@property (nonatomic) BOOL hasIsDemoConfiguration;
@property (nonatomic) BOOL isDemoConfiguration;

+ (Class)homeConfigurationsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)clearHomeConfigurations;
- (void)addHomeConfigurations:(id)a0;
- (unsigned long long)homeConfigurationsCount;
- (id)homeConfigurationsAtIndex:(unsigned long long)a0;

@end
