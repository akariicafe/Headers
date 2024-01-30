@class NSString;

@interface CPLScopedIdentifier : NSObject <NSCopying, NSSecureCoding> {
    long long _scopeIndex;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long scopeIndex;
@property (readonly, copy) NSString *scopeIdentifier;
@property (readonly, copy) NSString *identifier;

+ (id)scopedIdentifiersFromArrayOfUnknownIdentifiers:(id)a0;
+ (id)descriptionWithScopeIdentifier:(id)a0 identifier:(id)a1;
+ (id)scopedIdentifiersFromSetOfUnknownIdentifiers:(id)a0;
+ (id)scopedIdentifiersFromDictionaryOfUnknownIdentifiers:(id)a0;
+ (id)unscopedIdentifiersFromArrayOfScopedIdentifiers:(id)a0;
+ (id)unscopedIdentifiersFromSetOfScopedIdentifiers:(id)a0;
+ (id)unscopedIdentifiersFromDictionaryOfScopedIdentifiers:(id)a0;
+ (id)scopedIdentifierWithString:(id)a0 includeScopeIndex:(BOOL)a1;
+ (id)scopedIdentifierWithString:(id)a0 includeScopeIndex:(BOOL)a1 defaultScopeIdentifier:(id)a2;

- (void).cxx_destruct;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionWithNoScopeIndex;
- (BOOL)isInMainScope;
- (id)initInMainScopeWithIdentifier:(id)a0;
- (id)initWithScopeIdentifier:(id)a0 identifier:(id)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)safeFilename;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCPLArchiver:(id)a0;
- (id)plistArchiveWithCPLArchiver:(id)a0;
- (BOOL)cplSpecialIsEqual:(id)a0;
- (unsigned long long)cplSpecialHash;
- (id)initRelativeToScopedIdentifier:(id)a0 identifier:(id)a1;
- (id)initWithScopeIdentifier:(id)a0 identifier:(id)a1 scopeIndex:(long long)a2;

@end
