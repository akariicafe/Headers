@class UICanvas;

@interface _UICanvasDefinition : UISceneSession <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) UICanvas *representedCanvas;
@property (readonly, nonatomic) long long systemType;
@property (readonly, nonatomic) Class canvasSubclass;
@property (readonly, nonatomic) Class delegateClass;

@end
