@class NSDictionary, BBBulletin, UNNotification;

@interface SiriDirectActionContext : SiriContext

@property (readonly, nonatomic) NSDictionary *payload;
@property (readonly, nonatomic) BBBulletin *bulletin;
@property (readonly, nonatomic) UNNotification *notification;

+ (id)messageReadDirectActionWithAppBundleId:(id)a0 conversationGUID:(id)a1;
+ (id)messageComposeNewThreadDirectActionWithAppBundleId:(id)a0 fullName:(id)a1 phoneOrEmailAddress:(id)a2;
+ (id)messageReplyDirectActionWithAppBundleId:(id)a0 conversationGUID:(id)a1;
+ (BOOL)supportsSecureCoding;
+ (id)messageAmbiguousDirectActionWithAppBundleId:(id)a0;
+ (id)messageComposeDirectActionWithAppBundleId:(id)a0;
+ (id)mapSearchDirectActionWithAppBundleId:(id)a0;
+ (id)musicSearchDirectActionWithAppBundleId:(id)a0;
+ (id)phoneAmbiguousDirectActionWithAppBundleId:(id)a0;
+ (id)phoneCallDirectActionWithAppBundleId:(id)a0;

- (id)initWithPayload:(id)a0;
- (void).cxx_destruct;
- (id)bundleId;
- (id)initWithCoder:(id)a0;
- (id)description;
- (long long)directActionEvent;
- (id)initWithUNNotification:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_intentIdentifiersFromBulletin:(id)a0 notification:(id)a1;
- (id)_initWithDirectActionEvent:(long long)a0 appBundleId:(id)a1 conversationGUID:(id)a2 fullName:(id)a3 phoneOrEmailAddress:(id)a4;
- (id)initWithBBBulletin:(id)a0;
- (BOOL)isMessagingDirectAction;

@end
