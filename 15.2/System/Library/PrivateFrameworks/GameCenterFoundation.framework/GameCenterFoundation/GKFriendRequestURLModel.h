@class NSString, GKPlayer;

@interface GKFriendRequestURLModel : NSObject

@property (retain, nonatomic) NSString *friendSupportPageURL;
@property (retain, nonatomic) NSString *friendCode;
@property (retain, nonatomic) NSString *friendRequestState;
@property (retain, nonatomic) GKPlayer *initiator;
@property (retain, nonatomic) NSString *friendRequestVersion;

- (id)description;
- (void).cxx_destruct;

@end
