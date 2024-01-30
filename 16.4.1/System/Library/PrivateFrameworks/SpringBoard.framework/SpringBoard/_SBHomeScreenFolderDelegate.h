@protocol SBFolderControllerDelegate;

@interface _SBHomeScreenFolderDelegate : NSObject

@property (retain, nonatomic) id<SBFolderControllerDelegate> forwardingTarget;
@property (nonatomic) long long dockStyle;

- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)backgroundViewForDockForRootFolderController:(id)a0;
- (void).cxx_destruct;
- (id)initWithForwardingTarget:(id)a0;

@end
