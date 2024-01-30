@class _HKFitnessFriendActivitySnapshot, ASFriend;

@interface ASFriendListRow : NSObject

@property (retain, nonatomic) ASFriend *friend;
@property (retain, nonatomic) _HKFitnessFriendActivitySnapshot *snapshot;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
