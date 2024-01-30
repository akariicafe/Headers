@class NSString, NSPredicate;

@interface _EXValuesQuery : _EXQuery {
    unsigned int _platform;
    NSString *_extensionPointIdentifier;
    NSPredicate *_predicate;
    struct { unsigned int val[8]; } _hostAuditToken;
}

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqualToQuery:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)extensionPointIdentifier;
- (id)initWithCoder:(id)a0;
- (void)setExtensionPointIdentifier:(id)a0;
- (void)setPredicate:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)platform;
- (BOOL)isEqual:(id)a0;
- (void)setHostAuditToken:(struct { unsigned int x0[8]; })a0;
- (BOOL)matchesRecord:(id)a0;
- (unsigned long long)hash;
- (id)initWithExtensionPointIdentifier:(id)a0;
- (void)setPlatform:(unsigned int)a0;
- (id)init;
- (struct { unsigned int x0[8]; })hostAuditToken;
- (id)extensionPointRecords;
- (id)description;
- (id)initWithExtensionPointIdentifier:(id)a0 predicate:(id)a1;
- (void).cxx_destruct;
- (id)predicate;

@end
