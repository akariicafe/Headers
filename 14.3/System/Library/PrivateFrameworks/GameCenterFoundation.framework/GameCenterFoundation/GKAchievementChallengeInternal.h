@class GKAchievementInternal;

@interface GKAchievementChallengeInternal : GKChallengeInternal

@property (copy, nonatomic) GKAchievementInternal *achievement;

+ (id)secureCodedPropertyKeys;
+ (id)internalRepresentation;

- (id)titleText;
- (void)dealloc;
- (unsigned long long)type;
- (id)serverRepresentationForReceivingPlayer:(id)a0;

@end
