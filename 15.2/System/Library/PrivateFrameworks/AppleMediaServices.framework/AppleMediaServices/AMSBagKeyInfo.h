@class NSString;
@protocol NSObject;

@interface AMSBagKeyInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bagKey;
@property (readonly, nonatomic) id<NSObject> defaultValue;
@property (readonly, nonatomic) unsigned long long valueType;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithBagKey:(id)a0 valueType:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithBagKey:(id)a0 valueType:(unsigned long long)a1 defaultValue:(id)a2;
- (unsigned long long)hash;

@end
