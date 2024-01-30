@class NSString, ATXPBUserNotificationDerivedData, NSData, ATXPBSharedDigestEngagementTrackingMetrics, NSMutableArray;

@interface ATXPBUserNotification : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    struct { unsigned char appSpecifiedScore : 1; unsigned char badge : 1; unsigned char timestamp : 1; unsigned char attachmentType : 1; unsigned char urgency : 1; unsigned char isGroupMessage : 1; unsigned char isMessage : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) BOOL hasBody;
@property (retain, nonatomic) NSString *body;
@property (nonatomic) BOOL hasBadge;
@property (nonatomic) unsigned long long badge;
@property (readonly, nonatomic) BOOL hasUserInfo;
@property (retain, nonatomic) NSData *userInfo;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) BOOL hasThreadID;
@property (retain, nonatomic) NSString *threadID;
@property (readonly, nonatomic) BOOL hasCategoryID;
@property (retain, nonatomic) NSString *categoryID;
@property (readonly, nonatomic) BOOL hasSectionID;
@property (retain, nonatomic) NSString *sectionID;
@property (retain, nonatomic) NSMutableArray *contactIDs;
@property (retain, nonatomic) NSMutableArray *rawIdentifiers;
@property (nonatomic) BOOL hasIsMessage;
@property (nonatomic) BOOL isMessage;
@property (nonatomic) BOOL hasIsGroupMessage;
@property (nonatomic) BOOL isGroupMessage;
@property (nonatomic) BOOL hasUrgency;
@property (nonatomic) int urgency;
@property (nonatomic) BOOL hasAttachmentType;
@property (nonatomic) int attachmentType;
@property (nonatomic) BOOL hasAppSpecifiedScore;
@property (nonatomic) double appSpecifiedScore;
@property (readonly, nonatomic) BOOL hasDerivedData;
@property (retain, nonatomic) ATXPBUserNotificationDerivedData *derivedData;
@property (readonly, nonatomic) BOOL hasSharedEngagementTracker;
@property (retain, nonatomic) ATXPBSharedDigestEngagementTrackingMetrics *sharedEngagementTracker;

+ (Class)contactIDsType;
+ (Class)rawIdentifiersType;

- (void)clearRawIdentifiers;
- (void)addContactIDs:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)rawIdentifiersAtIndex:(unsigned long long)a0;
- (id)description;
- (id)initFromJSON:(id)a0;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)attachmentTypeAsString:(int)a0;
- (unsigned long long)rawIdentifiersCount;
- (unsigned long long)contactIDsCount;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (int)StringAsAttachmentType:(id)a0;
- (unsigned long long)hash;
- (id)urgencyAsString:(int)a0;
- (id)contactIDsAtIndex:(unsigned long long)a0;
- (void)clearContactIDs;
- (void)addRawIdentifiers:(id)a0;
- (id)dictionaryRepresentation;
- (int)StringAsUrgency:(id)a0;

@end
