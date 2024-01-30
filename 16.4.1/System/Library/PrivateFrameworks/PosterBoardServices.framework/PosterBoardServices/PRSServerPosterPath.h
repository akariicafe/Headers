@class NSURL, PRSServerPosterIdentity, NSString;

@interface PRSServerPosterPath : PRSPosterPath

@property (readonly, copy, nonatomic) PRSServerPosterIdentity *identity;
@property (readonly, copy, nonatomic) NSURL *providerURL;
@property (readonly, copy, nonatomic) NSURL *typeURL;
@property (readonly, copy, nonatomic) NSURL *identifierURL;
@property (readonly, copy, nonatomic) NSURL *versionsURL;
@property (readonly, copy, nonatomic) NSURL *instanceURL;
@property (readonly, copy, nonatomic) NSURL *supplementURL;
@property (readonly, copy, nonatomic) NSString *identityPathComponent;

+ (id)pathWithProviderURL:(id)a0 identity:(id)a1;
+ (id)pathWithContainerURL:(id)a0 identity:(id)a1;

- (BOOL)isServerPosterPath;
- (id)extendContentsReadAccessToAuditToken:(id)a0 error:(out id *)a1;
- (BOOL)isEqual:(id)a0;
- (id)containerURL;
- (id)extendInstanceReadAccessToAuditToken:(id)a0 error:(out id *)a1;

@end
