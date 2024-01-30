@class NSString, NSUUID, NSXPCConnection;

@interface LNAutoShortcutLocalizedPhrase : NSObject <NSSecureCoding> {
    NSXPCConnection *_connection;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *localizedPhrase;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *basePhraseTemplate;
@property (readonly, copy, nonatomic) NSUUID *parameterIdentifier;
@property (readonly, nonatomic, getter=isPrimary) BOOL primary;
@property (readonly, nonatomic) NSString *signature;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithLocalizedPhrase:(id)a0 bundleIdentifier:(id)a1 basePhraseTemplate:(id)a2 parameterIdentifier:(id)a3;
- (id)initWithLocalizedPhrase:(id)a0 bundleIdentifier:(id)a1 basePhraseTemplate:(id)a2 parameterIdentifier:(id)a3 primary:(BOOL)a4;
- (id)initWithLocalizedPhrase:(id)a0 bundleIdentifier:(id)a1 basePhraseTemplate:(id)a2 parameterIdentifier:(id)a3 primary:(BOOL)a4 signature:(id)a5;

@end
