@interface SBUpdateContinuousExposeStripsPresentationResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) unsigned long long presentationOptions;
@property (readonly, nonatomic) unsigned long long dismissalOptions;

- (long long)type;
- (id)initWithPresentationOptions:(unsigned long long)a0 dismissalOptions:(unsigned long long)a1;

@end
