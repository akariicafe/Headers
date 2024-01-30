@class NSUUID, NSString, NSDate;

@interface ATXNotificationDeliverySuggestion : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying, BMStoreData>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *uuid;
@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSUUID *triggerNotificationUUID;
@property (nonatomic) long long scope;
@property (readonly, copy, nonatomic) NSString *entityIdentifier;
@property (readonly, nonatomic) long long subtype;
@property (readonly, nonatomic) id subObject;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)json;
- (void)encodeWithCoder:(id)a0;
- (id)encodeAsProto;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRawData;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)serialize;
- (void).cxx_destruct;
- (id)initPromotingSuggestionWithUUID:(id)a0 scope:(long long)a1 entityIdentifier:(id)a2 timestamp:(id)a3 triggerNotificationUUID:(id)a4;
- (id)initQuietingSuggestionWithUUID:(id)a0 scope:(long long)a1 entityIdentifier:(id)a2 timestamp:(id)a3 triggerNotificationUUID:(id)a4;
- (id)initSendToDigestSuggestionWithUUID:(id)a0 bundleID:(id)a1 timestamp:(id)a2 triggerNotificationUUID:(id)a3;
- (id)initSendToMessagesDigestSuggestionWithUUID:(id)a0 bundleID:(id)a1 timestamp:(id)a2 triggerNotificationUUID:(id)a3;
- (id)initTurnOffNotificationsForAppSuggestionWithUUID:(id)a0 bundleID:(id)a1 timestamp:(id)a2 triggerNotificationUUID:(id)a3;
- (id)initUrgencyTuningSuggestionWithUUID:(id)a0 bundleID:(id)a1 timestamp:(id)a2 triggerNotificationUUID:(id)a3;
- (id)initWithInterruptionManagerTuningSuggestion:(id)a0 scope:(long long)a1 entityIdentifier:(id)a2 uuid:(id)a3 timestamp:(id)a4 triggerNotificationUUID:(id)a5;
- (id)initWithSmartPauseSuggestion:(id)a0 uuid:(id)a1 scope:(long long)a2 entityIdentifier:(id)a3 timestamp:(id)a4 triggerNotificationUUID:(id)a5;
- (BOOL)isEqualToATXNotificationDeliverySuggestion:(id)a0;

@end
