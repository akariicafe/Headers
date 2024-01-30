@class NSString, NSNumber, NSDictionary;

@interface TPSContextualDuetEventMeta : TPSSerializableObject

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *intentVerb;
@property (copy, nonatomic) NSString *intentClass;
@property (copy, nonatomic) NSNumber *intentDirection;
@property (copy, nonatomic) NSNumber *donatedBySiri;
@property (copy, nonatomic) NSString *context;
@property (copy, nonatomic) NSDictionary *userInfo;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)debugDescription;

@end
