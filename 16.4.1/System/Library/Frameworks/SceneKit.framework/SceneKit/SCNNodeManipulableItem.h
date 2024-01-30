@interface SCNNodeManipulableItem : SCNManipulableItem

+ (void)addItems:(id)a0 toScene:(id)a1;
+ (id)nodeManipulatorItemWithNode:(id)a0 screenSize:(double)a1;
+ (void)removeItemsFromScene:(id)a0;

- (struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; })transform;
- (void)setPosition:(struct SCNVector3 { float x0; float x1; float x2; })a0;
- (id)parentItem;
- (void)setTransform:(struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; })a0;
- (struct SCNVector3 { float x0; float x1; float x2; })scale;
- (struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; })worldTransform;
- (void)setWorldTransform:(struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; })a0;
- (id)cloneForManipulators;
- (BOOL)isNodeManipulator;
- (void)validateClone;

@end
