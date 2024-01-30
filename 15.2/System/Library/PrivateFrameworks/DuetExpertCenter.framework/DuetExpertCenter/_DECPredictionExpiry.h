@class NSDate;

@interface _DECPredictionExpiry : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) long long value;
@property (readonly, nonatomic) NSDate *date;

+ (id)expireAfter:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithType:(unsigned long long)a0 value:(unsigned long long)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
