@class NSArray, NSMapTable;

@interface SBSwitcherDisplayItemRemovalResolutionRequest : NSObject {
    NSMapTable *_displayItemToRemovalIntentType;
}

@property (readonly, copy, nonatomic) NSArray *displayItems;

- (void).cxx_destruct;
- (long long)removalIntentTypeForDisplayItem:(id)a0;
- (void)setRemovalIntentType:(long long)a0 forDisplayItem:(id)a1;

@end
