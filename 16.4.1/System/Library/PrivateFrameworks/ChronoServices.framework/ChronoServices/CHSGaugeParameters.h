@class NSArray, NSAttributedString, NSString;

@interface CHSGaugeParameters : NSObject <BSXPCSecureCoding>

@property (readonly, copy, nonatomic) NSAttributedString *leadingText;
@property (readonly, copy, nonatomic) NSAttributedString *trailingText;
@property (readonly, nonatomic) unsigned long long style;
@property (readonly, copy, nonatomic) NSArray *gradientColors;
@property (readonly, copy, nonatomic) NSArray *gradientLocations;
@property (readonly, nonatomic) double fraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithBSXPCCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLeadingText:(id)a0 trailingText:(id)a1 style:(unsigned long long)a2 gradientColors:(id)a3 gradientLocations:(id)a4 fraction:(double)a5;

@end
