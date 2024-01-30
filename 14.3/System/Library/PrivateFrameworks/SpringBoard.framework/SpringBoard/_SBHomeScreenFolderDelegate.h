@protocol SBFolderControllerDelegate;

@interface _SBHomeScreenFolderDelegate : NSObject

@property (retain, nonatomic) id<SBFolderControllerDelegate> forwardingTarget;

- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)backgroundViewForDockForRootFolderController:(id)a0;

@end
