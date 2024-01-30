@class UIBezierPath;

@interface GCVirtualControllerElementConfiguration : NSObject

@property (nonatomic, getter=isHidden) BOOL hidden;
@property (retain, nonatomic) UIBezierPath *path;
@property (nonatomic) BOOL actsAsTouchpad;

- (id)init;
- (void).cxx_destruct;

@end
