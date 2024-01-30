@class _UIFocusGroupMap;

@interface _UIDynamicFocusGroupMap : NSObject {
    _UIFocusGroupMap *_impl;
}

- (id)initWithCoordinateSpace:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)focusGroupIdentifierForItem:(id)a0;
- (id)initWithBackingFocusGroupMap:(id)a0;

@end
