@interface CMOnBodyStatus : CMLogItem {
    int fResult;
    int fConfidence;
}

@property (readonly, nonatomic) long long result;
@property (readonly, nonatomic) long long confidence;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOnBodyResult:(int)a0 confidence:(int)a1 timestamp:(double)a2;

@end
