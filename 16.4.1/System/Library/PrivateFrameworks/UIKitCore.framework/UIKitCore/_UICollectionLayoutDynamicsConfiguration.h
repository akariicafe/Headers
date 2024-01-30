@class NSArray, NSMutableDictionary, NSString, NSMutableArray;

@interface _UICollectionLayoutDynamicsConfiguration : NSObject <_UICollectionLayoutDynamicsConfiguration> {
    NSMutableArray *_dirtyItems;
    NSArray *_items;
}

@property (retain, nonatomic) NSMutableDictionary *behaviorDict;
@property (retain, nonatomic) NSArray *dynamicItems;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previousVisibleBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentVisibleBounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_reset;
- (id)init;
- (void).cxx_destruct;
- (id)_dirtyItems;
- (void)_setBehaviors:(id)a0 forItem:(id)a1;
- (id)behaviorsForItem:(id)a0;
- (void)setBehaviors:(id)a0 forItem:(id)a1;

@end
