@class NSDate;

@interface ICLStashedAppRecord : ICLAppRecord <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *stashedAtTimestamp;
@property (copy, nonatomic) NSDate *stashOriginalInstallTimestamp;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)legacyRecordDictionary;
- (id)initWithLegacyRecordDictionary:(id)a0;

@end
