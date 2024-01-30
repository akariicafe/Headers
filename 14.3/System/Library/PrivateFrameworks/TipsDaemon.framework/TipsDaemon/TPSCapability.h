@class NSString;

@interface TPSCapability : TPSSerializableObject

@property (nonatomic) unsigned long long joinType;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) id value;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)debugDescription;

@end
