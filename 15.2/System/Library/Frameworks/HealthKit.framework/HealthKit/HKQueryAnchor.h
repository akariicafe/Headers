@class NSString;

@interface HKQueryAnchor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=_rowid, setter=_setRowid:) long long rowid;
@property (copy, nonatomic, getter=_clientToken, setter=_setClientToken:) NSString *clientToken;

+ (id)latestAnchor;
+ (id)anchorFromValue:(unsigned long long)a0;
+ (id)_anchorWithRowid:(long long)a0;
+ (id)_anchorWithRowidValue:(long long)a0;

- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
