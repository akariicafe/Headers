@interface CLPPoiTriggerEvent : PBCodable <NSCopying> {
    struct { unsigned char triggerTimestamp : 1; unsigned char providerIdentifier : 1; unsigned char triggerSubType : 1; unsigned char triggerType : 1; } _has;
}

@property (nonatomic) unsigned long long muid;
@property (nonatomic) BOOL hasProviderIdentifier;
@property (nonatomic) int providerIdentifier;
@property (nonatomic) BOOL hasTriggerType;
@property (nonatomic) int triggerType;
@property (nonatomic) BOOL hasTriggerTimestamp;
@property (nonatomic) double triggerTimestamp;
@property (nonatomic) BOOL hasTriggerSubType;
@property (nonatomic) int triggerSubType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)triggerTypeAsString:(int)a0;
- (int)StringAsTriggerType:(id)a0;

@end
