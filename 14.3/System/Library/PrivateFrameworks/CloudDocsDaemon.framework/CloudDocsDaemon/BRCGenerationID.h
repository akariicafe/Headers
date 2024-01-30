@class NSNumber, NSData, NSString;

@interface BRCGenerationID : NSObject <NSCopying, NSSecureCoding, PQLValuable> {
    unsigned int _generationID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *fsGenerationID;
@property (readonly, nonatomic) NSData *signature;
@property (readonly, nonatomic) NSString *generationIDString;
@property (readonly, nonatomic) const char *UTF8String;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newFromSqliteValue:(struct sqlite3_value { } *)a0;
+ (id)newFromSqliteStatement:(struct sqlite3_stmt { } *)a0 atIndex:(int)a1;

- (void)sqliteBind:(struct sqlite3_stmt { } *)a0 index:(int)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRelativePath:(id)a0;
- (id)initWithFSGenerationID:(unsigned int)a0;
- (BOOL)isEqualToFSGenerationID:(unsigned int)a0;
- (BOOL)isEqualToGenerationID:(id)a0 orSignature:(id)a1;
- (id)initWithSignature:(const void *)a0 length:(unsigned long long)a1;

@end
