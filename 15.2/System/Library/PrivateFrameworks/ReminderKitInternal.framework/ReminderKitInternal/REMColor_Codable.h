@interface REMColor_Codable : REMColor

- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3 colorSpace:(unsigned long long)a4;
- (id)initWithHexString:(id)a0;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3 colorSpace:(unsigned long long)a4 daSymbolicColorName:(id)a5 daHexString:(id)a6 ckSymbolicColorName:(id)a7;
- (id)initWithDASymbolicColorName:(id)a0 daHexString:(id)a1;
- (id)initWithCKSymbolicColorName:(id)a0 hexString:(id)a1;

@end
