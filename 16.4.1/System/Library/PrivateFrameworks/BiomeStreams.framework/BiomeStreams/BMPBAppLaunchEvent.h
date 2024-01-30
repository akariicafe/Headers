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
@property (readonly, nonatomic) BOOL hasParentBundleID;
@property (retain, nonatomic) NSString *parentBundleID;
@property (readonly, nonatomic) BOOL hasExtensionHostID;
@property (retain, nonatomic) NSString *extensionHostID;
@property (readonly, nonatomic) BOOL hasShortVersionString;
@property (retain, nonatomic) NSString *shortVersionString;
@property (readonly, nonatomic) BOOL hasExactVersionString;
@property (retain, nonatomic) NSString *exactVersionString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)launchTypeAsString:(int)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsLaunchType:(id)a0;

@end
