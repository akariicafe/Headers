@class NSString;

@interface SBDragAndDropGestureSwitcherModifierEvent : SBGestureSwitcherModifierEvent

@property (nonatomic) long long dropAction;
@property (retain, nonatomic) NSString *draggedSceneIdentifier;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } platterViewFrame;
@property (nonatomic) double platterScale;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)type;

@end
