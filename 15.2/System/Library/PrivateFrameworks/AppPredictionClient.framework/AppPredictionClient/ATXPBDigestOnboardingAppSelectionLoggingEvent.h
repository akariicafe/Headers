@class NSString;

@interface ATXPBDigestOnboardingAppSelectionLoggingEvent : PBCodable <NSCopying> {
    struct { unsigned char avgNumBasicNotifications : 1; unsigned char avgNumMessageNotifications : 1; unsigned char avgNumTimeSensitiveNonMessageNotifications : 1; unsigned char rank : 1; unsigned char addedToDigest : 1; unsigned char wasShownInDigestOnboarding : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSessionUUID;
@property (retain, nonatomic) NSString *sessionUUID;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL hasAvgNumBasicNotifications;
@property (nonatomic) unsigned int avgNumBasicNotifications;
@property (nonatomic) BOOL hasAvgNumMessageNotifications;
@property (nonatomic) unsigned int avgNumMessageNotifications;
@property (nonatomic) BOOL hasAvgNumTimeSensitiveNonMessageNotifications;
@property (nonatomic) unsigned int avgNumTimeSensitiveNonMessageNotifications;
@property (nonatomic) BOOL hasRank;
@property (nonatomic) unsigned int rank;
@property (nonatomic) BOOL hasAddedToDigest;
@property (nonatomic) BOOL addedToDigest;
@property (nonatomic) BOOL hasWasShownInDigestOnboarding;
@property (nonatomic) BOOL wasShownInDigestOnboarding;

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
