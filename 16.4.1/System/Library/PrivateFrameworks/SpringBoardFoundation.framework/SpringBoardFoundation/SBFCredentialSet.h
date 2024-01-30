@class NSData;

@interface SBFCredentialSet : NSObject <NSSecureCoding> {
    struct __ACMHandle { } *_acmContext;
    BOOL _ownsContext;
    NSData *_cachedCredentials;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSerializedCredentialSet:(id)a0;
- (id)serializedCredentialSet;

@end
