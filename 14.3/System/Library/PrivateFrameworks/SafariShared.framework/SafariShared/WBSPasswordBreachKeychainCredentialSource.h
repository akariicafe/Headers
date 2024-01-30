@class NSArray;

@interface WBSPasswordBreachKeychainCredentialSource : NSObject <WBSPasswordBreachCredentialSource>

@property (readonly, nonatomic) NSArray *credentials;

- (BOOL)_shouldCheckCredential:(id)a0;
- (id)savedPasswordsForPersistentIdentifiers:(id)a0;

@end
