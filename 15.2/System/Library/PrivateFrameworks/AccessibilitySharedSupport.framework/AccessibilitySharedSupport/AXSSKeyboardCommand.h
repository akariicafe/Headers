@class NSString;

@interface AXSSKeyboardCommand : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *standardCommandIdentifier;
@property (readonly, nonatomic) NSString *localizedName;

+ (id)commandWithStandardCommandIdentifier:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToCommand:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(id)a0;
- (unsigned long long)hash;
- (id)initWithStandardCommandIdentifier:(id)a0;
- (id)_initWithType:(id)a0 standardCommandIdentifier:(id)a1;

@end
