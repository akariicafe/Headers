@class NSArray, UIBezierPath, NSString, NSMapTable;

@interface UIDynamicItemGroup : NSObject <UIDynamicItem> {
    NSMapTable *_itemsToOffsets;
}

@property (readonly, copy, nonatomic) NSArray *items;
@property (nonatomic) struct CGPoint { double x; double y; } center;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (readonly, nonatomic) unsigned long long collisionBoundsType;
@property (readonly, nonatomic) UIBezierPath *collisionBoundingPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithItems:(id)a0;
- (void).cxx_destruct;

@end
