@class NSArray, NSMapTable, _UIFocusGroup;
@protocol UICoordinateSpace;

@interface _UIFocusGroupMap : NSObject <NSCopying> {
    NSMapTable *_environmentToGroupMap;
    NSMapTable *_identifierToGroupMap;
    NSMapTable *_identifierToPrimaryItemMap;
    _UIFocusGroup *_nullGroup;
    NSMapTable *_standInItemsMap;
}

@property (readonly, nonatomic) id<UICoordinateSpace> coordinateSpace;
@property (readonly, nonatomic) NSArray *focusGroups;
@property (readonly, nonatomic) NSArray *focusItems;

- (id)visualDescription;
- (id)description;
- (void).cxx_destruct;
- (id)focusGroupForItem:(id)a0;
- (id)initWithItems:(id)a0 coordinateSpace:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithItems:(id)a0 standInItemsMap:(id)a1 coordinateSpace:(id)a2;
- (void)_indexItems:(id)a0;
- (id)_indexEnvironment:(id)a0;

@end
