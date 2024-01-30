@class NSString, NSAttributedString;

@interface AXCustomContent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSAttributedString *attributedLabel;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSAttributedString *attributedValue;
@property (nonatomic) unsigned long long importance;

+ (id)customContentWithLabel:(id)a0 value:(id)a1;
+ (id)customContentWithAttributedLabel:(id)a0 attributedValue:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
