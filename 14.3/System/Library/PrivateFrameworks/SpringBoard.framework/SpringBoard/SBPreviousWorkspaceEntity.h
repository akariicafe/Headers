@interface SBPreviousWorkspaceEntity : SBWorkspaceEntity

@property (readonly, nonatomic) long long previousLayoutRole;

+ (id)entityWithPreviousLayoutRole:(long long)a0;

- (id)initWithIdentifier:(id)a0 displayChangeSettings:(id)a1;
- (BOOL)isPreviousWorkspaceEntity;
- (id)initWithPreviousLayoutRole:(long long)a0;

@end
