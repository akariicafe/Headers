@class NSString, UITraitCollection;

@interface _UIImageContentLayoutDrawingTarget : NSObject <_UIImageContentEffect, _UIImageContentLayoutTarget>

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long semanticContentAttribute;
@property (readonly, nonatomic) long long contentMode;
@property (readonly, nonatomic) BOOL _hasContentGravity;
@property (readonly, nonatomic) double preferredContentScaleFactor;
@property (readonly, nonatomic) BOOL _layoutShouldFlipHorizontalOrientations;

@end
