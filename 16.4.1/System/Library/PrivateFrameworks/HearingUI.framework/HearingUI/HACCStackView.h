@interface HACCStackView : UIStackView

+ (double)separatorHeight;

- (void)removeArrangedSubview:(id)a0;
- (void)addArrangedSubview:(id)a0 andSeparator:(BOOL)a1 withIndent:(double)a2;
- (void)addArrangedSubview:(id)a0 withPartialSeparator:(BOOL)a1;
- (void)addArrangedSubview:(id)a0 withSeparator:(BOOL)a1;

@end
