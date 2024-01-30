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
