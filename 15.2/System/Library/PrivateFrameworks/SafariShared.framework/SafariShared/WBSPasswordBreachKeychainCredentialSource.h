@class NSArray;

@interface WBSPasswordBreachKeychainCredentialSource : NSObject <WBSPasswordBreachCredentialSource>

@property (readonly, nonatomic) NSArray *credentials;

- (id)savedPasswordsForPersistentIdentifiers:(id)a0;

@end
