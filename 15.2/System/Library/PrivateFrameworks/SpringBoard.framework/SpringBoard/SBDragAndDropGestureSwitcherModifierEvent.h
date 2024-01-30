@class NSString, SBSwitcherDropRegionContext;

@interface SBDragAndDropGestureSwitcherModifierEvent : SBGestureSwitcherModifierEvent

@property (nonatomic) long long dropAction;
@property (retain, nonatomic) NSString *draggedSceneIdentifier;
@property (nonatomic) long long draggedSceneLayoutRole;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } platterViewFrame;
@property (nonatomic) double platterScale;
@property (nonatomic, getter=hasPreviewLifted) BOOL previewHasLifted;
@property (nonatomic, getter=hasPlatterized) BOOL platterized;
@property (nonatomic, getter=isWindowDrag) BOOL windowDrag;
@property (nonatomic, getter=isSwitcherDrag) BOOL switcherDrag;
@property (retain, nonatomic) SBSwitcherDropRegionContext *switcherDropRegionContext;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)type;

@end
