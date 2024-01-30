@class NSArray, NSString, NSDictionary;

@interface ICPushNotificationMessage : NSObject

@property (readonly, nonatomic) long long sagaServerRevision;
@property (readonly, copy, nonatomic) NSArray *sagaUpdatedSubscribedPlaylistIDs;
@property (readonly, nonatomic) long long jaliscoServerRevision;
@property (readonly, copy, nonatomic) NSArray *jaliscoChangedMediaTypes;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) long long moduleIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) long long accountDSID;
@property (readonly, nonatomic) long long actionType;
@property (readonly, copy, nonatomic) NSDictionary *apsPayload;

- (void).cxx_destruct;
- (id)initWithMessageUserInfo:(id)a0;

@end
