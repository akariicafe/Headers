@class NSArray, NSString, NSPredicate;

@interface _EXQuery : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property struct { unsigned int x0[8]; } hostAuditToken;
@property unsigned long long resultType;
@property (readonly) NSArray *extensionPointRecords;
@property unsigned int platform;
@property (nonatomic) BOOL includePostprocessing;
@property (retain) NSString *extensionPointIdentifier;
@property (retain) NSPredicate *predicate;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)executeQuery:(id)a0;
+ (id)executeQueries:(id)a0;
+ (id)allExtensionsQuery;
+ (void)executeQuery:(id)a0 completionHandler:(id /* block */)a1;
+ (void)executeQueries:(id)a0 completionHandler:(id /* block */)a1;
+ (id)extensionPointIdentifierQuery:(id)a0;
+ (id)extensionPointIdentifierQuery:(id)a0 platform:(unsigned int)a1;

- (id)initWithExtensionPointIdentifier:(id)a0 platform:(unsigned int)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithExtensionPoint:(id)a0;
- (BOOL)matchesRecord:(id)a0;
- (id)initWithExtensionPointIdentifier:(id)a0;
- (id)init;
- (id)initWithExtensionPointIdentifier:(id)a0 predicate:(id)a1;
- (void).cxx_destruct;
- (BOOL)matches:(id)a0;

@end
