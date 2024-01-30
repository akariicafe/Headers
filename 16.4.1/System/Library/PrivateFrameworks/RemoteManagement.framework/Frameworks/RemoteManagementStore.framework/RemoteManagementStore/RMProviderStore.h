@class NSString, NSURL;

@interface RMProviderStore : RMBaseStore <NSSecureCoding, RMMutableStoreProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long scope;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *storeDescription;
@property (readonly, copy, nonatomic) NSURL *enrollmentURL;
@property (readonly, copy, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) BOOL defaultToInteractive;
@property (readonly, nonatomic) BOOL dataSeparated;
@property (readonly, copy, nonatomic) NSString *personaIdentifier;

+ (void)storesWithScope:(long long)a0 completionHandler:(id /* block */)a1;
+ (void)createStoreWithType:(long long)a0 scope:(long long)a1 defaultToInteractive:(BOOL)a2 dataSeparated:(BOOL)a3 options:(id)a4 completionHandler:(id /* block */)a5;
+ (void)removeStoreWithIdentifier:(id)a0 scope:(long long)a1 completionHandler:(id /* block */)a2;
+ (void)storeWithIdentifier:(id)a0 scope:(long long)a1 completionHandler:(id /* block */)a2;

- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToStore:(id)a0;
- (void)applyChangesWithCompletionHandler:(id /* block */)a0;
- (void)deleteDeclarationWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveDeclaration:(id)a0 completionHandler:(id /* block */)a1;

@end
