@interface SBInvalidateItemContainerBackdropEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) long long updateMode;

- (long long)type;
- (id)initWithUpdateMode:(long long)a0;

@end
