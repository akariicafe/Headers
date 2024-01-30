@class NSString;

@interface CLSSliderAnswerFormat : CLSAnswerFormat <CLSRelationable> {
    long long _maximum;
    long long _minimum;
    NSString *_leadingValueLabel;
    NSString *_trailingValueLabel;
    NSString *_midValueLabel;
    long long _type;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long type;
@property (nonatomic) long long maximum;
@property (nonatomic) long long minimum;
@property (copy, nonatomic) NSString *leadingValueLabel;
@property (copy, nonatomic) NSString *trailingValueLabel;
@property (copy, nonatomic) NSString *midValueLabel;

+ (BOOL)supportsSecureCoding;
+ (id)relations;

- (void)encodeWithCoder:(id)a0;
- (void)mergeWithObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setType:(long long)a0;
- (BOOL)validateObject:(id *)a0;
- (BOOL)isValueEqual:(id)a0;

@end
