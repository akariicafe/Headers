@class NSString;

@interface _EXRunningExtensionInfo : NSObject <EXExtensionInfoProviding>

@property (class, readonly, nonatomic) _EXRunningExtensionInfo *extensionInfoForCurrentProcess;

@property (readonly) NSString *runLoopType;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *containerBundleIdentifier;
@property (readonly, nonatomic) NSString *containingViewControllerClassName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)notifyExtensionMainCalled;

- (id)initForCurrentProcess;
- (void).cxx_destruct;

@end
