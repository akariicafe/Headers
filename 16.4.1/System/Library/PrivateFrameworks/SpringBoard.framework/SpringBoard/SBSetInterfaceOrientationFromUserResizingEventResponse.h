@class SBDisplayItem;

@interface SBSetInterfaceOrientationFromUserResizingEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBDisplayItem *displayItem;
@property (readonly, nonatomic) long long desiredOrientation;

- (long long)type;
- (void).cxx_destruct;
- (id)initWithDisplayItem:(id)a0 desiredContentOrientation:(long long)a1;

@end
