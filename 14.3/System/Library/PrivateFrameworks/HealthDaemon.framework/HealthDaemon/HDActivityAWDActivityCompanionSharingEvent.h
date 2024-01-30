@interface HDActivityAWDActivityCompanionSharingEvent : PBCodable <NSCopying> {
    struct { unsigned char numberOfFriends : 1; unsigned char numberOfFriendsAwaitingResponse : 1; unsigned char numberOfFriendsHiddenFromMe : 1; unsigned char numberOfFriendsMuted : 1; unsigned char numberOfFriendsMyDataHidden : 1; unsigned char numberOfFriendsPendingMyResponse : 1; unsigned char timestamp : 1; unsigned char maxFriendDuration : 1; unsigned char medianFriendDuration : 1; unsigned char minFriendDuration : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasNumberOfFriends;
@property (nonatomic) long long numberOfFriends;
@property (nonatomic) BOOL hasMedianFriendDuration;
@property (nonatomic) int medianFriendDuration;
@property (nonatomic) BOOL hasMinFriendDuration;
@property (nonatomic) int minFriendDuration;
@property (nonatomic) BOOL hasMaxFriendDuration;
@property (nonatomic) int maxFriendDuration;
@property (nonatomic) BOOL hasNumberOfFriendsMyDataHidden;
@property (nonatomic) long long numberOfFriendsMyDataHidden;
@property (nonatomic) BOOL hasNumberOfFriendsHiddenFromMe;
@property (nonatomic) long long numberOfFriendsHiddenFromMe;
@property (nonatomic) BOOL hasNumberOfFriendsMuted;
@property (nonatomic) long long numberOfFriendsMuted;
@property (nonatomic) BOOL hasNumberOfFriendsAwaitingResponse;
@property (nonatomic) long long numberOfFriendsAwaitingResponse;
@property (nonatomic) BOOL hasNumberOfFriendsPendingMyResponse;
@property (nonatomic) long long numberOfFriendsPendingMyResponse;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)medianFriendDurationAsString:(int)a0;
- (int)StringAsMedianFriendDuration:(id)a0;
- (id)minFriendDurationAsString:(int)a0;
- (int)StringAsMinFriendDuration:(id)a0;
- (id)maxFriendDurationAsString:(int)a0;
- (int)StringAsMaxFriendDuration:(id)a0;

@end
