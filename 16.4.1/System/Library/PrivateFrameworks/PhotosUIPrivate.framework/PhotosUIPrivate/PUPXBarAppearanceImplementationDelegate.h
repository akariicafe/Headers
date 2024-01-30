@class NSString;

@interface PUPXBarAppearanceImplementationDelegate : NSObject <PXBarAppearanceImplementationDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)barAppearanceIsStatusBarVisible:(id)a0;

@end
