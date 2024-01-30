@class ATXPBPredictionDeviceStateContext, ATXPBPredictionAmbientLightContext, ATXPBPredictionLocationMotionContext, ATXPBPredictionTimeContext, ATXPBPredictionUserContext;

@interface ATXPBPredictionContext : PBCodable <NSCopying> {
    struct { unsigned char isOverridden : 1; } _has;
}

@property (nonatomic) BOOL hasIsOverridden;
@property (nonatomic) BOOL isOverridden;
@property (readonly, nonatomic) BOOL hasDeviceStateContext;
@property (retain, nonatomic) ATXPBPredictionDeviceStateContext *deviceStateContext;
@property (readonly, nonatomic) BOOL hasTimeContext;
@property (retain, nonatomic) ATXPBPredictionTimeContext *timeContext;
@property (readonly, nonatomic) BOOL hasLocationMotionContext;
@property (retain, nonatomic) ATXPBPredictionLocationMotionContext *locationMotionContext;
@property (readonly, nonatomic) BOOL hasAmbientLightContext;
@property (retain, nonatomic) ATXPBPredictionAmbientLightContext *ambientLightContext;
@property (readonly, nonatomic) BOOL hasUserContext;
@property (retain, nonatomic) ATXPBPredictionUserContext *userContext;

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
