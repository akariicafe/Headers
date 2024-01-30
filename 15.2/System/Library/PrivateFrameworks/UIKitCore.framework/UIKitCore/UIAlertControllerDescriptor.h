@interface UIAlertControllerDescriptor : NSObject <NSCopying>

@property BOOL hasHeaderContentViewController;
@property BOOL hasTitle;
@property BOOL hasMessage;
@property BOOL hasContentViewController;
@property long long numberOfActions;
@property BOOL applicationIsFullscreen;
@property struct UIEdgeInsets { double top; double left; double bottom; double right; } containerViewSafeAreaInsets;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
