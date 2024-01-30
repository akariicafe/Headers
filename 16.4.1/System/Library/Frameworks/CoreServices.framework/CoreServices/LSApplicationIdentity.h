@class LSApplicationRecord, NSString, _LSEmbeddedApplicationIdentityBookmark;

@interface LSApplicationIdentity : NSObject <NSSecureCoding, NSCopying> {
    _LSEmbeddedApplicationIdentityBookmark *_identityBookmark;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) LSApplicationRecord *weakRecord;
@property (readonly, nonatomic) NSString *identityString;
@property (readonly, nonatomic) NSString *personaUniqueString;
@property (readonly, nonatomic) unsigned long long personaType;

+ (id)enumeratorWithOptions:(unsigned long long)a0;
+ (unsigned int)classVersion;
+ (Class)currentIdentityClass;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)needsMigration;
- (void).cxx_destruct;
- (id)findApplicationRecordWithError:(id *)a0;
- (id)initForRecord:(id)a0 personaWithAttributes:(id)a1;
- (id)initWithBundleIdentifier:(id)a0 allowPlaceholder:(BOOL)a1 personaUniqueString:(id)a2 error:(id *)a3;
- (id)initWithIdentityBookmark:(id)a0 identityString:(id)a1 personaUniqueString:(id)a2 personaType:(unsigned long long)a3;
- (id)initWithIdentityString:(id)a0;
- (id)initWithIdentityString:(id)a0 parsedIdentityStringDictionary:(id)a1 error:(id *)a2;

@end
