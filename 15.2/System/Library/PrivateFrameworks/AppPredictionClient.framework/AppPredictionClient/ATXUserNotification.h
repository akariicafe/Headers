@class NSUUID, NSString, NSData, NSArray, ATXUserNotificationDerivedData, ATXSharedDigestEngagementTrackingMetrics;

@interface ATXUserNotification : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *body;
@property (nonatomic) unsigned long long badge;
@property (copy, nonatomic) NSData *userInfo;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *threadID;
@property (copy, nonatomic) NSString *categoryID;
@property (copy, nonatomic) NSString *sectionID;
@property (copy, nonatomic) NSArray *contactIDs;
@property (copy, nonatomic) NSArray *rawIdentifiers;
@property (nonatomic) BOOL isMessage;
@property (nonatomic) BOOL isGroupMessage;
@property (nonatomic) long long urgency;
@property (nonatomic) long long attachmentType;
@property (nonatomic) double appSpecifiedScore;
@property (retain, nonatomic) ATXUserNotificationDerivedData *derivedData;
@property (retain, nonatomic) ATXSharedDigestEngagementTrackingMetrics *digestEngagementTrackingMetrics;

- (id)groupId;
- (id)initWithProto:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)description;
- (id)initFromJSON:(id)a0;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)encodeAsProto;
- (id)initFromNotificationData:(id)a0 timestamp:(double)a1 title:(id)a2 subtitle:(id)a3 body:(id)a4 badge:(unsigned long long)a5 userInfo:(id)a6 bundleID:(id)a7 threadID:(id)a8 categoryID:(id)a9 sectionID:(id)a10 contactIDs:(id)a11 rawIdentifiers:(id)a12 isGroupMessage:(BOOL)a13 derivedData:(id)a14 urgency:(long long)a15;
- (id)initFromNotificationData:(id)a0 timestamp:(double)a1 title:(id)a2 subtitle:(id)a3 body:(id)a4 badge:(unsigned long long)a5 userInfo:(id)a6 bundleID:(id)a7 threadID:(id)a8 categoryID:(id)a9 sectionID:(id)a10 contactIDs:(id)a11 isGroupMessage:(BOOL)a12 derivedData:(id)a13 urgency:(long long)a14;
- (id)initFromNotificationData:(id)a0 timestamp:(double)a1 title:(id)a2 subtitle:(id)a3 body:(id)a4 badge:(unsigned long long)a5 userInfo:(id)a6 bundleID:(id)a7 threadID:(id)a8 categoryID:(id)a9 sectionID:(id)a10 contactIDs:(id)a11 isGroupMessage:(BOOL)a12 derivedData:(id)a13;
- (id)digestRankingHardcodedComparisonValue;
- (BOOL)isEqualToATXUserNotification:(id)a0;
- (id)initWithUUID:(id)a0 timestamp:(double)a1;
- (id)initFromNotificationData:(id)a0 timestamp:(double)a1 title:(id)a2 subtitle:(id)a3 body:(id)a4 badge:(unsigned long long)a5 userInfo:(id)a6 bundleID:(id)a7 threadID:(id)a8 sectionID:(id)a9 contactIDs:(id)a10 isGroupMessage:(BOOL)a11 derivedData:(id)a12 urgency:(long long)a13;
- (id)initFromNotificationData:(id)a0 date:(id)a1 title:(id)a2 subtitle:(id)a3 body:(id)a4 bundleID:(id)a5 threadID:(id)a6 categoryID:(id)a7;
- (id)initFromNotificationData:(id)a0 timestamp:(double)a1 title:(id)a2 subtitle:(id)a3 body:(id)a4 badge:(unsigned long long)a5 userInfo:(id)a6 bundleID:(id)a7 threadID:(id)a8 derivedData:(id)a9;
- (id)initFromNotificationData:(id)a0 timestamp:(double)a1 title:(id)a2 subtitle:(id)a3 body:(id)a4 badge:(unsigned long long)a5 userInfo:(id)a6 bundleID:(id)a7 threadID:(id)a8 categoryID:(id)a9 derivedData:(id)a10;
- (long long)compareForDigestRanking:(id)a0;
- (double)finalDigestScoreForMode:(id)a0;
- (BOOL)hasPreviewableAttachment;

@end
