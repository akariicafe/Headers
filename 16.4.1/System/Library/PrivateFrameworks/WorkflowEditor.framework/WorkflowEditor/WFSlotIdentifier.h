@class NSString;

@interface WFSlotIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *parameterKey;
@property (readonly, nonatomic) long long arrayIndex;

- (id)initWithKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)identifierBySettingArrayIndex:(long long)a0;
- (id)identifierBySettingParameterKey:(id)a0;
- (id)identifierBySettingParameterKey:(id)a0 arrayIndex:(long long)a1;
- (id)initWithKey:(id)a0 parameterKey:(id)a1 arrayIndex:(long long)a2;

@end
