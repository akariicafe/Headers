@interface CPInterval : NSObject {
    double left;
    double right;
}

- (void)add:(id)a0;
- (BOOL)intersects:(id)a0;
- (BOOL)contains:(id)a0;
- (double)right;
- (double)left;
- (id)initLeft:(double)a0 right:(double)a1;

@end
