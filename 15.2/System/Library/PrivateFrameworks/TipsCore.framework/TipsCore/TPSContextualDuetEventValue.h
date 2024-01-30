@class NSNumber, NSString;

@interface TPSContextualDuetEventValue : TPSSerializableObject

@property (copy, nonatomic) NSNumber *boolValue;
@property (copy, nonatomic) NSNumber *integerValue;
@property (copy, nonatomic) NSNumber *doubleValue;
@property (copy, nonatomic) NSString *stringValue;
@property (nonatomic) unsigned long long valueType;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)debugDescription;

@end
