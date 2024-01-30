@class NSArray;

@interface WFTableTemplateValue : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long compoundType;
@property (readonly, copy, nonatomic) NSArray *rows;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCompoundType:(long long)a0 rows:(id)a1;

@end
