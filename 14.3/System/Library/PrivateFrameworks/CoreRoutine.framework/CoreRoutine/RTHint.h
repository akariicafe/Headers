@class RTLocation, NSDate;

@interface RTHint : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) RTLocation *location;
@property (readonly, nonatomic) long long source;
@property (readonly, nonatomic) NSDate *date;

+ (id)hintSourceToString:(long long)a0;

- (id)init;
- (id)initWithLocation:(id)a0 source:(long long)a1 date:(id)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
