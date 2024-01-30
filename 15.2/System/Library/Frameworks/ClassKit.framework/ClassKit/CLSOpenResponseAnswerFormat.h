@class NSString;

@interface CLSOpenResponseAnswerFormat : CLSAnswerFormat <CLSRelationable> {
    NSString *_teacherProvidedText;
    long long _maximumTextLength;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *teacherProvidedText;
@property (nonatomic) long long minimumTextLength;
@property (nonatomic) long long maximumTextLength;

+ (BOOL)supportsSecureCoding;
+ (id)relations;

- (void)encodeWithCoder:(id)a0;
- (void)setMinimum:(long long)a0;
- (void)mergeWithObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(long long)a0;
- (BOOL)validateObject:(id *)a0;
- (id)initWithType:(long long)a0 starterText:(id)a1 minimumLength:(long long)a2 maximumLength:(long long)a3;

@end
