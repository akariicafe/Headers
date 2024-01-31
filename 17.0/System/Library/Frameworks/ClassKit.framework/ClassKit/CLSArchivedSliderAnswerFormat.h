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

+ (BOOL)supportsSecureCoding;
+ (id)relations;

- (void)setType:(long long)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
