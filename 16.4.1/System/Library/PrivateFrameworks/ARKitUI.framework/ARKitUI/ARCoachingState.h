@class ARCoachingOverlayView;

@interface ARCoachingState : NSObject

@property (weak, nonatomic) ARCoachingOverlayView *view;
@property (readonly, nonatomic) long long requirements;
@property (readonly, nonatomic) BOOL isViewActiveForState;

- (id)initWithView:(id)a0;
- (void)enter;
- (void)exit;
- (void).cxx_destruct;
- (id)doAction:(long long)a0;

@end
