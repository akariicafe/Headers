@class NSArray, NSDate;

@interface TPSContextualCondition : TPSSerializableObject

@property (nonatomic) unsigned long long joinType;
@property (copy, nonatomic) NSArray *rules;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSDate *matchedDate;

+ (BOOL)supportsSecureCoding;
+ (id)eventsForConditionDictionary:(id)a0;
+ (id)classSet;

- (id)eventIdentifiers;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (void)restartTracking;
- (id)initWithDictionary:(id)a0 type:(unsigned long long)a1;

@end
