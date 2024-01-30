@class NSString, RMStoreXPCConnection;

@interface RMBaseStore : NSObject <RMStoreProtocol>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *storeDescription;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (nonatomic) BOOL defaultToInteractive;
@property (nonatomic) BOOL dataSeparated;
@property (copy, nonatomic) NSString *personaIdentifier;
@property (retain, nonatomic) RMStoreXPCConnection *xpcConnection;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)fetchDataAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)declarationsWithTypes:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0 type:(long long)a1 name:(id)a2 description:(id)a3 accountIdentifier:(id)a4 defaultToInteractive:(BOOL)a5 dataSeparated:(BOOL)a6 personaIdentifier:(id)a7;
- (void)declarationWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)declarationsWithCompletionHandler:(id /* block */)a0;
- (void)declarationManifestWithCompletionHandler:(id /* block */)a0;
- (void)setShouldInstallConfiguration:(id)a0 shouldInstall:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)isEqualToStore:(id)a0;

@end
