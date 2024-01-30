@class NSString, NSData, NSDate;

@interface QLThumbnailVersion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *generatorID;
@property (copy) NSString *generatorVersion;
@property (copy) NSDate *modificationDate;
@property (copy) NSData *versionIdentifier;
@property unsigned long long fileSize;
@property (readonly, getter=isDefaultVersion) BOOL defaultVersion;
@property (readonly, getter=isAutomaticallyGenerated) BOOL automaticallyGenerated;
@property unsigned long long ino;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFileURL:(id)a0 automaticallyGenerated:(BOOL)a1;
- (id)initWithFPItem:(id)a0 automaticallyGenerated:(BOOL)a1;
- (id)initWithModificationDate:(id)a0 fileSize:(unsigned long long)a1 versionIdentifier:(id)a2 ino:(unsigned long long)a3 generatorID:(id)a4 generatorVersion:(id)a5;
- (void)getGeneratorID:(id *)a0 version:(id *)a1;
- (id)initWithFileURL:(id)a0 generatorID:(id)a1 generatorVersion:(id)a2;
- (id)initWithFPItem:(id)a0 generatorID:(id)a1 generatorVersion:(id)a2;
- (BOOL)shouldBeInvalidatedByThumbnailWithVersion:(id)a0;

@end
