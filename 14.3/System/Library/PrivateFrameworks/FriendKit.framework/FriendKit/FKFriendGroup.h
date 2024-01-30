@class NSString, NSMutableArray;
@protocol FKFriendGroupDelegate;

@interface FKFriendGroup : NSObject {
    NSMutableArray *_friendsManager;
    unsigned long long _groupSize;
}

@property (weak, nonatomic) id<FKFriendGroupDelegate> delegate;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned long long selectedPosition;

- (id)init;
- (void).cxx_destruct;
- (id)friends;
- (BOOL)isFull;
- (unsigned long long)count;
- (void)setFriends:(id)a0;
- (id)initWithDelegate:(id)a0 groupSize:(unsigned long long)a1;
- (void)addFriend:(id)a0 error:(unsigned int *)a1;
- (void)removeFriendAtPosition:(unsigned long long)a0;
- (long long)_firstEmptyPosition;
- (id)initWithGroupSize:(unsigned long long)a0;
- (void)setFriend:(id)a0 atPosition:(unsigned long long)a1 error:(unsigned int *)a2;
- (id)friendAtPosition:(unsigned long long)a0;
- (unsigned long long)positionOfFriend:(id)a0;
- (BOOL)containsFriend:(id)a0;
- (id)displayNameForGroupWithSeparator:(id)a0;

@end
