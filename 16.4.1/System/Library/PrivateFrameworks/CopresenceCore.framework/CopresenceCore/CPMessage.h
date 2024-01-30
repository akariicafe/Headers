@class NSString, NSDictionary, NSArray;

@interface CPMessage : NSObject

@property (copy, nonatomic) NSString *messageType;
@property (copy, nonatomic) NSString *sessionUUID;
@property (copy, nonatomic) NSDictionary *payloadDict;
@property (copy, nonatomic) NSArray *destinations;
@property (copy, nonatomic) NSString *sender;

+ (id)makeAppBroadcastMessageForSession:(id)a0 appBundleId:(id)a1 toDestinations:(id)a2;
+ (id)makeAppSharingRequestMessageForSession:(id)a0 bundleInfo:(id)a1 toDestinations:(id)a2;
+ (id)makeInviteDeclineMessageForSession:(id)a0 inviteOriginatorAccountID:(id)a1 toDestinations:(id)a2;
+ (id)makeInviteRequestMessageForParticipants:(id)a0 withSession:(id)a1 toDestinations:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (id)initWithMessageType:(id)a0 withSession:(id)a1 withPayload:(id)a2 from:(id)a3;
- (id)initWithMessageType:(id)a0 withSession:(id)a1 withPayload:(id)a2 toDestinations:(id)a3;

@end
