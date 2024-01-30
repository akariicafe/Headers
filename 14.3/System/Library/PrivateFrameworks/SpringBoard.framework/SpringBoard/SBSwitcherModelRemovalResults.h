@class NSArray, NSMutableDictionary;

@interface SBSwitcherModelRemovalResults : NSObject {
    NSMutableDictionary *_appLayoutToAction;
}

@property (readonly, copy, nonatomic) NSArray *appLayouts;

- (void).cxx_destruct;
- (id)actionForAppLayout:(id)a0;
- (void)setAction:(id)a0 forAppLayout:(id)a1;

@end
