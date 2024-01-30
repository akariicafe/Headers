@class NSUUID, NSString, NSArray;

@interface HKObjectAuthorizationPromptSession : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *sessionIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSArray *samplesRequiringAuthorization;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initForBundleIdentifier:(id)a0 samples:(id)a1 sessionIdentifier:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
