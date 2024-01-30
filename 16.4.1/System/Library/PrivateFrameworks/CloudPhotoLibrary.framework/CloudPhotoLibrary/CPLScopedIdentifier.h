@class NSString;

@interface CPLScopedIdentifier : NSObject <NSCopying, NSSecureCoding> {
    long long _scopeIndex;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long scopeIndex;
@property (readonly, copy) NSString *scopeIdentifier;
@property (readonly, copy) NSString *identifier;

+ (id)scopedIdentifiersFromSetOfUnknownIdentifiers:(id)a0;
+ (id)scopedIdentifierWithString:(id)a0 includeScopeIndex:(BOOL)a1 defaultScopeIdentifier:(id)a2;
+ (id)unscopedIdentifiersFromSetOfScopedIdentifiers:(id)a0;
+ (id)scopedIdentifiersFromDictionaryOfUnknownIdentifiers:(id)a0;
+ (id)unscopedIdentifiersFromDictionaryOfScopedIdentifiers:(id)a0;
+ (id)scopedIdentifierWithString:(id)a0 includeScopeIndex:(BOOL)a1;
+ (id)scopedIdentifiersFromArrayOfUnknownIdentifiers:(id)a0;
+ (id)descriptionWithScopeIdentifier:(id)a0 identifier:(id)a1;
+ (id)unscopedIdentifiersFromArrayOfScopedIdentifiers:(id)a0;

- (unsigned long long)cplSpecialHash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)initRelativeToScopedIdentifier:(id)a0 identifier:(id)a1;
- (id)initInMainScopeWithIdentifier:(id)a0;
- (id)initWithCPLArchiver:(id)a0;
- (id)safeFilename;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionWithNoScopeIndex;
- (id)initWithScopeIdentifier:(id)a0 identifier:(id)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)plistArchiveWithCPLArchiver:(id)a0;
- (BOOL)cplSpecialIsEqual:(id)a0;
- (id)description;
- (BOOL)isInMainScope;
- (id)initWithScopeIdentifier:(id)a0 identifier:(id)a1 scopeIndex:(long long)a2;
- (void).cxx_destruct;

@end
