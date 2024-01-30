@interface TSWPLineSpacing : NSObject <NSCopying> {
    int _mode;
    double _amount;
    double _baselineRule;
}

+ (id)lineSpacing;

- (int)mode;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (double)amount;
- (id)initWithMode:(int)a0 amount:(double)a1;
- (double)baselineRule;
- (id)initWithMode:(int)a0 amount:(double)a1 baselineRule:(double)a2;

@end
