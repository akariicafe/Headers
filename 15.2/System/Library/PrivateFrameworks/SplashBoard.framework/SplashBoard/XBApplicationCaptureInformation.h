@class NSOrderedSet, NSString, NSArray;

@interface XBApplicationCaptureInformation : NSObject <BSDescriptionProviding> {
    NSArray *_captureInfos;
    NSArray *_launchImagePaths;
}

@property (readonly, nonatomic) NSOrderedSet *launchRequests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (unsigned long long)estimatedMemoryImpactForLaunchRequest:(id)a0;
- (id)launchImagePathForLaunchRequest:(id)a0;
- (id)caarPathForLaunchRequest:(id)a0;
- (id)initWithLaunchRequests:(id)a0 captureInfos:(id)a1 launchImagePaths:(id)a2;

@end
