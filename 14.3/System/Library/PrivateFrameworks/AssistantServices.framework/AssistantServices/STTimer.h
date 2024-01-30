@class NSNumber;

@interface STTimer : STSiriModelObject

@property (nonatomic) long long state;
@property (copy, nonatomic) NSNumber *value;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
