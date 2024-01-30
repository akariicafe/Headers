@class NSString, NSNumber;

@interface TPSContextualDuetEventMeta : TPSSerializableObject

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *intentVerb;
@property (copy, nonatomic) NSString *intentClass;
@property (copy, nonatomic) NSNumber *intentDirection;
@property (copy, nonatomic) NSNumber *donatedBySiri;
@property (copy, nonatomic) NSString *context;

+ (BOOL)supportsSecureCoding;
+ (id)classSet;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
