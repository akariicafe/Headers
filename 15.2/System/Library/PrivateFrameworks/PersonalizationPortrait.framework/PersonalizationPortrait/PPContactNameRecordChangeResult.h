@class NSArray;

@interface PPContactNameRecordChangeResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *changes;
@property (readonly, nonatomic) BOOL changesTruncated;

+ (id)contactNameRecordChangeResultWithChanges:(id)a0 changesTruncated:(BOOL)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithChanges:(id)a0 changesTruncated:(BOOL)a1;
- (BOOL)isEqualToContactNameRecordChangeResult:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
