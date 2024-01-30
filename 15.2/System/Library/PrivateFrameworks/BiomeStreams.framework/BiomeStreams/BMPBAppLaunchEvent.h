@class NSString;

@interface BMPBAppLaunchEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; unsigned char duration : 1; unsigned char launchType : 1; unsigned char starting : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLaunchReason;
@property (retain, nonatomic) NSString *launchReason;
@property (nonatomic) BOOL hasLaunchType;
@property (nonatomic) int launchType;
@property (nonatomic) BOOL hasStarting;
@property (nonatomic) BOOL starting;
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) double duration;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (retain, nonatomic) NSString *bundleID;

- (id)launchTypeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (int)StringAsLaunchType:(id)a0;
- (id)dictionaryRepresentation;

@end
