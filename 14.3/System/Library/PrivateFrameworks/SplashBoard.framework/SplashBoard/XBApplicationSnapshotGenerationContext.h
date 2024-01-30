@class XBApplicationLaunchCompatibilityInfo, NSString, XBLaunchStateRequest;

@interface XBApplicationSnapshotGenerationContext : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) XBApplicationLaunchCompatibilityInfo *applicationCompatibilityInfo;
@property (readonly, copy, nonatomic) XBLaunchStateRequest *launchRequest;
@property (readonly, nonatomic) double timeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithApplicationCompatibilityInfo:(id)a0 launchRequest:(id)a1 timeout:(double)a2;

@end
