@class NSString, NSLocale;

@interface CDMXPCSetupNLURequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSLocale *localeIdentifier;
@property (retain) NSString *sandboxId;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithLocaleIdentifier:(id)a0 sandboxId:(id)a1;

@end
