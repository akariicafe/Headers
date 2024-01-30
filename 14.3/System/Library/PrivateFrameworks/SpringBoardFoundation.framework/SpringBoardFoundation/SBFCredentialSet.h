@class NSData;

@interface SBFCredentialSet : NSObject <NSSecureCoding> {
    struct __ACMHandle { } *_acmContext;
    BOOL _ownsContext;
    NSData *_cachedCredentials;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithSerializedCredentialSet:(id)a0;
- (id)serializedCredentialSet;
- (void)encodeWithCoder:(id)a0;

@end
