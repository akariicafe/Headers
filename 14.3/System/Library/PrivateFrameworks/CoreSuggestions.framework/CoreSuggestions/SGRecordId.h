@interface SGRecordId : NSObject <NSCopying, NSSecureCoding> {
    long long _internalEntityId;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)recordIdWithInternalEntityId:(long long)a0;
+ (id)recordIdWithNumericValue:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (long long)numericValue;
- (id)initWithInternalEntityId:(long long)a0;
- (long long)internalEntityId;
- (BOOL)isEqualToRecordId:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
