@class NSString, SBWindowScene;

@interface _SBActiveDisplayKeyboardFocusTracker : NSObject <SBActiveWindowSceneTracking>

@property (readonly, weak, nonatomic) SBWindowScene *activeWindowScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
