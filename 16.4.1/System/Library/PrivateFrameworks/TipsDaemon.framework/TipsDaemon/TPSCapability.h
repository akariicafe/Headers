@class NSString;

@interface TPSCapability : TPSSerializableObject

@property (nonatomic) long long joinType;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) id value;

- (id)debugDescription;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
