@class NSString;

@interface CLSArchivedSliderAnswerFormat : CLSArchivedAnswerFormat <CLSRelationable> {
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

+ (id)relations;
+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setType:(long long)a0;
- (id)init;
- (void).cxx_destruct;

@end
