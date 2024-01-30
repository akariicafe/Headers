@class GKAchievementInternal;

@interface GKAchievementChallengeInternal : GKChallengeInternal

@property (copy, nonatomic) GKAchievementInternal *achievement;

+ (id)internalRepresentation;
+ (id)secureCodedPropertyKeys;

- (id)titleText;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)serverRepresentationForReceivingPlayer:(id)a0;

@end
