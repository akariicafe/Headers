@class NSString;

@interface Version : NSObject <NSCopying>

@property (readonly) unsigned int major;
@property (readonly) unsigned int minor;
@property (readonly) unsigned int bugfix;
@property (readonly) NSString *modifier;

+ (id)versionZero;
+ (id)pre3_15_0_Mapping;
+ (id)allVersionedKeysForKey:(id)a0 modifier:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToVersion:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (long long)compareToVersion:(id)a0;
- (id)initWithVersionString:(id)a0 error:(id *)a1;
- (BOOL)isAllDigitsInString:(id)a0;
- (id)getVersionAsString;
- (id)versionedKey:(id)a0 modifier:(id)a1;

@end
