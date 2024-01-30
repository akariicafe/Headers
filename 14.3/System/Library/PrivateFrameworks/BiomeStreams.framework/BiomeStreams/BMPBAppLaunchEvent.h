@class NSString;

@interface BMPBAppLaunchEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; unsigned char duration : 1; unsigned char launchType : 1; unsigned char string : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLaunchReason;
@property (retain, nonatomic) NSString *launchReason;
@property (nonatomic) BOOL hasLaunchType;
@property (nonatomic) int launchType;
@property (nonatomic) BOOL hasString;
@property (nonatomic) BOOL string;
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) double duration;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (retain, nonatomic) NSString *bundleID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)launchTypeAsString:(int)a0;
- (int)StringAsLaunchType:(id)a0;

@end
