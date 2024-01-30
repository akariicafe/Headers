@class GKAchievementInternal;

@interface GKAchievementChallengeInternal : GKChallengeInternal

@property (copy, nonatomic) GKAchievementInternal *achievement;

+ (id)secureCodedPropertyKeys;
+ (id)internalRepresentation;

- (unsigned long long)type;
- (id)titleText;
- (void).cxx_destruct;
- (id)serverRepresentationForReceivingPlayer:(id)a0;

@end
