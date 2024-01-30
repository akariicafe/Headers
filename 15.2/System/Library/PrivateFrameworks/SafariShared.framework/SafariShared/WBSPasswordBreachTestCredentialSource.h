@class NSArray;

@interface WBSPasswordBreachTestCredentialSource : NSObject <WBSPasswordBreachCredentialSource> {
    NSArray *_credentials;
}

@property (readonly, nonatomic) NSArray *credentials;

- (id)savedPasswordsForPersistentIdentifiers:(id)a0;
- (void).cxx_destruct;
- (id)initWithPasswords:(id)a0;

@end
