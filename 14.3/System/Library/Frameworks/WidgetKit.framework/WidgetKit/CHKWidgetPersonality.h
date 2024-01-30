@class NSString;

@interface CHKWidgetPersonality : NSObject <CHSWidgetPersonality, NSSecureCoding> {
    void /* unknown type, empty encoding */ extensionBundleIdentifier;
    void /* unknown type, empty encoding */ kind;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *extensionBundleIdentifier;
@property (nonatomic, readonly) NSString *kind;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (BOOL)matchesPersonality:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
