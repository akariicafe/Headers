@interface HKQueryAnchor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=_rowid, setter=_setRowid:) long long rowid;

+ (id)anchorFromValue:(unsigned long long)a0;
+ (id)latestAnchor;
+ (id)_anchorWithRowidValue:(long long)a0;
+ (id)_anchorWithRowid:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
