@interface SBWorkspaceEntityRemovalContext : NSObject

@property (readonly, nonatomic) unsigned long long animationStyle;
@property (readonly, nonatomic) unsigned long long removalActionType;

- (id)initWithAnimationStyle:(unsigned long long)a0 removalActionType:(unsigned long long)a1;

@end
