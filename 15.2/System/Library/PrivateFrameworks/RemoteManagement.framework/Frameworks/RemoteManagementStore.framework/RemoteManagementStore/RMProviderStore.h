@class NSString;

@interface RMProviderStore : RMBaseStore <NSSecureCoding, RMMutableStoreProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *storeDescription;
@property (readonly, copy, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) BOOL defaultToInteractive;
@property (readonly, nonatomic) BOOL dataSeparated;
@property (readonly, copy, nonatomic) NSString *personaIdentifier;

+ (void)storesWithCompletionHandler:(id /* block */)a0;
+ (void)storeWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)createStoreWithType:(long long)a0 defaultToInteractive:(BOOL)a1 dataSeparated:(BOOL)a2 options:(id)a3 completionHandler:(id /* block */)a4;
+ (void)removeStoreWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;

- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToStore:(id)a0;
- (void)saveDeclaration:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteDeclarationWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)applyChangesWithCompletionHandler:(id /* block */)a0;

@end
