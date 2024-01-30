@class NSString, NSObject;
@protocol NSSecureCoding, NSCopying;

@interface PPLabeledValue : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSObject<NSCopying, NSSecureCoding> *value;

+ (id)labeledValueWithLabel:(id)a0 value:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLabel:(id)a0 value:(id)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToLabeledValue:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
