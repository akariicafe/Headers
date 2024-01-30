@class NSArray;

@interface SBInvalidateSnapshotCacheSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, copy, nonatomic) NSArray *displayItems;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)type;
- (void).cxx_destruct;
- (id)initWithDisplayItems:(id)a0;

@end
