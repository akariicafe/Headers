@class NSString, NSMutableArray;

@interface ATXNotificationsPBSetting : PBCodable <NSCopying> {
    struct { unsigned char alert : 1; unsigned char alertStyle : 1; unsigned char announcement : 1; unsigned char authStatus : 1; unsigned char badge : 1; unsigned char carPlay : 1; unsigned char criticalAlert : 1; unsigned char group : 1; unsigned char lockScreen : 1; unsigned char notificationCenter : 1; unsigned char showPreviews : 1; unsigned char sound : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) BOOL hasGenre;
@property (retain, nonatomic) NSString *genre;
@property (nonatomic) BOOL hasAuthStatus;
@property (nonatomic) int authStatus;
@property (nonatomic) BOOL hasSound;
@property (nonatomic) int sound;
@property (nonatomic) BOOL hasBadge;
@property (nonatomic) int badge;
@property (nonatomic) BOOL hasAlert;
@property (nonatomic) int alert;
@property (nonatomic) BOOL hasNotificationCenter;
@property (nonatomic) int notificationCenter;
@property (nonatomic) BOOL hasLockScreen;
@property (nonatomic) int lockScreen;
@property (nonatomic) BOOL hasCarPlay;
@property (nonatomic) int carPlay;
@property (nonatomic) BOOL hasAlertStyle;
@property (nonatomic) int alertStyle;
@property (nonatomic) BOOL hasShowPreviews;
@property (nonatomic) int showPreviews;
@property (nonatomic) BOOL hasCriticalAlert;
@property (nonatomic) int criticalAlert;
@property (nonatomic) BOOL hasAnnouncement;
@property (nonatomic) int announcement;
@property (nonatomic) BOOL hasGroup;
@property (nonatomic) int group;
@property (retain, nonatomic) NSMutableArray *topics;

+ (Class)topicsType;

- (id)badgeAsString:(int)a0;
- (int)StringAsBadge:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)topicsCount;
- (void)addTopics:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)topicsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void)clearTopics;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)authStatusAsString:(int)a0;
- (int)StringAsAuthStatus:(id)a0;
- (id)soundAsString:(int)a0;
- (int)StringAsSound:(id)a0;
- (id)alertAsString:(int)a0;
- (int)StringAsAlert:(id)a0;
- (id)notificationCenterAsString:(int)a0;
- (int)StringAsNotificationCenter:(id)a0;
- (id)lockScreenAsString:(int)a0;
- (int)StringAsLockScreen:(id)a0;
- (id)carPlayAsString:(int)a0;
- (int)StringAsCarPlay:(id)a0;
- (id)alertStyleAsString:(int)a0;
- (int)StringAsAlertStyle:(id)a0;
- (id)showPreviewsAsString:(int)a0;
- (int)StringAsShowPreviews:(id)a0;
- (id)criticalAlertAsString:(int)a0;
- (int)StringAsCriticalAlert:(id)a0;
- (id)announcementAsString:(int)a0;
- (int)StringAsAnnouncement:(id)a0;
- (id)groupAsString:(int)a0;
- (int)StringAsGroup:(id)a0;

@end
