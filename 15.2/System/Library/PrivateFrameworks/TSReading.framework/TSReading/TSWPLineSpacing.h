@interface TSWPLineSpacing : NSObject <NSCopying> {
    int _mode;
    double _amount;
    double _baselineRule;
}

+ (id)lineSpacing;

- (double)amount;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)mode;
- (id)initWithMode:(int)a0 amount:(double)a1;
- (id)initWithMode:(int)a0 amount:(double)a1 baselineRule:(double)a2;
- (double)baselineRule;

@end
