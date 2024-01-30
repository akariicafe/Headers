@class NSString, NSPredicate;

@interface _EXQuery : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *extensionPointIdentifier;
@property unsigned int platform;
@property (retain) NSPredicate *predicate;

+ (id)executeQuery:(id)a0;
+ (id)executeQueries:(id)a0;
+ (void)executeQueries:(id)a0 completionHandler:(id /* block */)a1;
+ (id)asyncQueryQueue;
+ (void)executeQuery:(id)a0 completionHandler:(id /* block */)a1;
+ (id)extensionPointIdentifierQuery:(id)a0;
+ (id)extensionPointIdentifierQuery:(id)a0 platform:(unsigned int)a1;
+ (id)allExtensionsQuery;

- (BOOL)matches:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)matchesRecord:(id)a0;
- (BOOL)isEqualToQuery:(id)a0;

@end
