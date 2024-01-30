@interface STSetting : STSiriModelObject

@property (nonatomic) long long type;
@property (retain, nonatomic) id value;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
