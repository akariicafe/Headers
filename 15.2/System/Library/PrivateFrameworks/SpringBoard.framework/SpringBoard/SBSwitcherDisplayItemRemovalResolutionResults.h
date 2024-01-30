@class NSArray, NSMutableDictionary;

@interface SBSwitcherDisplayItemRemovalResolutionResults : NSObject {
    NSMutableDictionary *_displayItemToActions;
}

@property (readonly, copy, nonatomic) NSArray *displayItems;

- (void).cxx_destruct;
- (id)actionsForDisplayItem:(id)a0;
- (void)setActions:(id)a0 forDisplayItem:(id)a1;

@end
