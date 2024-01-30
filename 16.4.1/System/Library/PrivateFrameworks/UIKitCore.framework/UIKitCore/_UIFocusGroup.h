@class NSString, NSArray, UIView, NSMutableArray;
@protocol UICoordinateSpace, UIFocusItem;

@interface _UIFocusGroup : NSObject {
    struct { unsigned char itemOrderValid : 1; unsigned char childGroupOrderValid : 1; unsigned char primaryItemValid : 1; unsigned char primaryRectValid : 1; } _flags;
    NSMutableArray *_childGroups;
    NSMutableArray *_items;
}

@property (readonly, nonatomic, getter=_owningView) UIView *owningView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } primaryRect;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, weak, nonatomic) _UIFocusGroup *parentGroup;
@property (readonly, nonatomic) NSArray *childGroups;
@property (readonly, nonatomic) id<UIFocusItem> primaryItem;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (readonly, nonatomic) id<UICoordinateSpace> coordinateSpace;

+ (id)nullGroupWithCoordinateSpace:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (void)_insertItem:(id)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (void)_validatePrimaryItemIfNecessary;
- (id)_deepCopyWithNewIdentifierToGroupMap:(id)a0;
- (void)_insertChildGroup:(id)a0;
- (void)_invalidateChildGroupOrder;
- (void)_invalidateItemOrder;
- (void)_invalidatePrimaryItem;
- (void)_invalidatePrimaryRect;
- (void)_updateWithEnvironment:(id)a0;
- (void)_validateChildGroupOrderIfNecessary;
- (void)_validateItemOrderIfNecessary;
- (void)_validatePrimaryRectIfNeccessary;
- (id)childGroupWithIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0 parentGroup:(id)a1 coordinateSpace:(id)a2;
- (BOOL)isEqualToFocusGroup:(id)a0;

@end
