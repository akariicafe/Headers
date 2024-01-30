@class NSString, WFIconBackground;

@interface WFSymbolIcon : WFIcon

@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) WFIconBackground *background;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)hasClearBackground;
- (id)initWithSymbolName:(id)a0 background:(id)a1;

@end
