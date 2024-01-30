@class _HKFitnessFriendActivitySnapshot, ASFriend;

@interface ASFriendListRow : NSObject

@property (retain, nonatomic) ASFriend *friend;
@property (retain, nonatomic) _HKFitnessFriendActivitySnapshot *snapshot;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
