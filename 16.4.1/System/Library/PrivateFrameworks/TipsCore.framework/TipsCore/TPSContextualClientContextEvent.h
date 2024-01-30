@class NSArray;

@interface TPSContextualClientContextEvent : TPSContextualEvent

@property (copy, nonatomic) NSArray *conditions;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)clientContextKeys;

@end
