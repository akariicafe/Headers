@class NSArray, NSDate;

@interface TPSContextualCondition : TPSSerializableObject

@property (nonatomic) unsigned long long joinType;
@property (copy, nonatomic) NSArray *rules;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSDate *matchedDate;

+ (BOOL)supportsSecureCoding;
+ (id)eventsForConditionDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)eventIdentifiers;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 type:(unsigned long long)a1;
- (void)restartTracking;

@end
