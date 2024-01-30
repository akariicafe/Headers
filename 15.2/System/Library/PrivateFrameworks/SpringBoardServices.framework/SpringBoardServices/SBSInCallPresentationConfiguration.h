@class NSString, NSUUID;

@interface SBSInCallPresentationConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double preferredBannerHeight;
@property (nonatomic) long long preferredPresentationMode;
@property (nonatomic, getter=isUserInitiated) BOOL userInitiated;
@property (readonly, copy, nonatomic) NSString *sceneBundleIdentifier;
@property (nonatomic, getter=isScreenSharingPresentation) BOOL screenSharingPresentation;
@property (readonly, nonatomic) NSUUID *identifier;

- (id)initWithSceneBundleIdentifier:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)succinctDescription;
- (id)description;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;

@end
