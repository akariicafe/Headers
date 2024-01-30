@interface CMCalorieUserInfo : CMLogItem {
    double fAge;
    long long fGender;
    double fHeight;
    double fWeight;
    long long fCondition;
    BOOL fBetaBlockerUse;
}

@property (readonly, nonatomic) long long gender;
@property (readonly, nonatomic) double age;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) double weight;
@property (readonly, nonatomic) long long condition;
@property (readonly, nonatomic) BOOL betaBlockerUse;

+ (BOOL)supportsSecureCoding;
+ (id)genderString:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)initWithAge:(double)a0 gender:(long long)a1 height:(double)a2 weight:(double)a3;
- (id)initWithAge:(double)a0 gender:(long long)a1 height:(double)a2 weight:(double)a3 condition:(long long)a4;
- (id)initWithAge:(double)a0 gender:(long long)a1 height:(double)a2 weight:(double)a3 condition:(long long)a4 betaBlockerUse:(BOOL)a5;

@end
