@class NSString;

@interface SBSInCallPresentationConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double preferredBannerHeight;
@property (nonatomic) long long preferredPresentationMode;
@property (nonatomic, getter=isUserInitiated) BOOL userInitiated;
@property (readonly, copy, nonatomic) NSString *sceneBundleIdentifier;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSceneBundleIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
