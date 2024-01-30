@interface NSColor : UIColor

+ (BOOL)supportsSecureCoding;
+ (id)colorWithCalibratedWhite:(double)a0 alpha:(double)a1;
+ (id)colorWithCalibratedRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;

- (Class)classForCoder;
- (id)initWithCoder:(id)a0;

@end
