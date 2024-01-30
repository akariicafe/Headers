@class UIScreen, NSString;

@interface _UIScreenFixedCoordinateSpace : NSObject <UICoordinateSpace>

@property (nonatomic, setter=_setScreen:) UIScreen *_screen;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
