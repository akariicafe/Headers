@class NSString, _UIFocusHaloView;
@protocol UIFocusItem;

@interface _UIFocusEffectManager : NSObject <_UIGeometryChangeObserver>

@property (readonly, nonatomic) _UIFocusHaloView *haloView;
@property (weak, nonatomic) id<UIFocusItem> focusedItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
