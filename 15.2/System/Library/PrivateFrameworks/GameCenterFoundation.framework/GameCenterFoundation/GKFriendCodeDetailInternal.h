@class NSString, NSArray, GKPlayerInternal;

@interface GKFriendCodeDetailInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *creatorPlayerID;
@property (retain, nonatomic) GKPlayerInternal *creatorPlayer;
@property (retain, nonatomic) NSString *friendCode;
@property (nonatomic) long long friendCodeState;
@property (retain, nonatomic) NSArray *alreadyUsedPlayerIDs;
@property (nonatomic) long long friendCodeUsageCount;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFriendCodeDetail:(id)a0;

@end
