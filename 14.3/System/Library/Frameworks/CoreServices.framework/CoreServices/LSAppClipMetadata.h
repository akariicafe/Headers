@class NSArray, NSDictionary;

@interface LSAppClipMetadata : NSObject <NSSecureCoding> {
    NSDictionary *_appClipPlist;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *parentApplicationIdentifiers;
@property (readonly) BOOL wantsEphemeralNotifications;
@property (readonly) BOOL wantsLocationConfirmation;

+ (id)new;

- (id)_initWithApplicationRecord:(id)a0 parentApplicationIdentifiers:(id)a1 appClipPlist:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
