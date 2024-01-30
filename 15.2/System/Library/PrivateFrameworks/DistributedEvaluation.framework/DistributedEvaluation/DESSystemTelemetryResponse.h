@class NSString;

@interface DESSystemTelemetryResponse : PBCodable <NSCopying> {
    struct { unsigned char createTimeUtc : 1; unsigned char recordCount : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPlugin;
@property (retain, nonatomic) NSString *plugin;
@property (nonatomic) BOOL hasRecordCount;
@property (nonatomic) unsigned long long recordCount;
@property (nonatomic) BOOL hasCreateTimeUtc;
@property (nonatomic) unsigned long long createTimeUtc;
@property (readonly, nonatomic) BOOL hasDeviceLocale;
@property (retain, nonatomic) NSString *deviceLocale;
@property (readonly, nonatomic) BOOL hasDeviceOs;
@property (retain, nonatomic) NSString *deviceOs;
@property (readonly, nonatomic) BOOL hasDeviceType;
@property (retain, nonatomic) NSString *deviceType;

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

@end
