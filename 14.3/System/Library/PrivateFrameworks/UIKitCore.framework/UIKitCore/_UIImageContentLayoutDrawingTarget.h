@class NSString;

@interface _UIImageContentLayoutDrawingTarget : NSObject <_UIImageContentEffect, _UIImageContentLayoutTarget>

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long semanticContentAttribute;
@property (readonly, nonatomic) long long contentMode;
@property (readonly, nonatomic) BOOL _hasContentGravity;
@property (readonly, nonatomic) double preferredContentScaleFactor;
@property (readonly, nonatomic) BOOL _layoutShouldFlipHorizontalOrientations;

- (id)_effectForRenderingSource:(id)a0;
- (id)_renditionForSource:(id)a0 size:(struct CGSize { double x0; double x1; })a1 withCGImageProvider:(id /* block */)a2 lazy:(BOOL)a3;

@end
