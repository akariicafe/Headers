@class NSString;

@interface GKFriendRecommendationInternal : GKFamiliarPlayerInternal

@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSString *reason2;
@property (nonatomic) unsigned int rid;
@property (nonatomic) int source;

+ (id)secureCodedPropertyKeys;
+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (int)defaultFamiliarity;

@end
