@class NSString, NSUUID, ATXSharedDigestEngagementTrackingMetrics, NSArray;

@interface ATXUserNotificationDigestNotificationGroup : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *groupDescription;
@property (nonatomic) double priority;
@property (retain, nonatomic) NSUUID *representativeNotificationUUID;
@property (retain, nonatomic) ATXSharedDigestEngagementTrackingMetrics *digestEngagementTrackingMetrics;
@property (readonly, nonatomic) NSArray *rankedNotifications;
@property (readonly, nonatomic) double appSpecifiedScore;

+ (id)groupsFromNotifications:(id)a0 modeId:(id)a1;

- (id)initWithProto:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)initFromJSON:(id)a0;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (id)initWithNotifications:(id)a0 modeId:(id)a1;
- (BOOL)hasPreviewableAttachment;
- (BOOL)isCommunicationGroup;
- (id)initWithNotifications:(id)a0 useDigestOrder:(BOOL)a1;
- (id)initWithNotifications:(id)a0;

@end
