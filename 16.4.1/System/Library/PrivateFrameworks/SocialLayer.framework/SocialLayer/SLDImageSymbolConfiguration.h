@class NSNumber;

@interface SLDImageSymbolConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long size;
@property (nonatomic) long long weight;
@property (nonatomic) double pointSize;
@property (retain, nonatomic) NSNumber *pointSizeNumber;

+ (id)configurationWithSize:(long long)a0 weight:(long long)a1 pointSize:(double)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSize:(long long)a0 weight:(long long)a1 pointSize:(double)a2;

@end
