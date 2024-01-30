@class NSString;

@interface MCUIViewController : UIViewController <PSStateRestoration>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canBeShownFromSuspendedState;
- (void)dealloc;
- (void)updateExtendedLayoutIncludesOpaqueBars;

@end
