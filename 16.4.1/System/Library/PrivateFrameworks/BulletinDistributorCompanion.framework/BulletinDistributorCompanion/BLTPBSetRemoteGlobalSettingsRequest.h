@interface BLTPBSetRemoteGlobalSettingsRequest : PBRequest <NSCopying> {
    struct { unsigned char globalScheduledDeliverySetting : 1; unsigned char settingDate : 1; } _has;
}

@property (nonatomic) BOOL hasGlobalScheduledDeliverySetting;
@property (nonatomic) unsigned long long globalScheduledDeliverySetting;
@property (nonatomic) BOOL hasSettingDate;
@property (nonatomic) double settingDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
