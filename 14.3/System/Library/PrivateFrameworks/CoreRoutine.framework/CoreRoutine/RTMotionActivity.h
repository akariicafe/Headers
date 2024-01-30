@class NSDate;

@interface RTMotionActivity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long confidence;
@property (readonly, nonatomic) NSDate *startDate;

+ (id)motionActivityTypeToString:(unsigned long long)a0;
+ (id)motionActivityConfidenceToString:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithType:(unsigned long long)a0 confidence:(unsigned long long)a1 startDate:(id)a2;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
