@class NSString, NSURL, NSUUID;

@interface FBSBundleInfo : NSObject <BSDescriptionProviding>

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSURL *bundleURL;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *bundleVersion;
@property (readonly, copy, nonatomic) NSString *bundleType;
@property (readonly, nonatomic) unsigned long long sequenceNumber;
@property (readonly, copy, nonatomic) NSUUID *cacheGUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)_initWithBundleIdentifier:(id)a0 url:(id)a1;
- (id)_initWithBundleProxy:(id)a0 bundleIdentifier:(id)a1 url:(id)a2;
- (id)_initWithBundleProxy:(id)a0 overrideURL:(id)a1;

@end
