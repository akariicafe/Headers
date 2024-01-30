@interface BCVirtualBrtControl : BCBrtControl {
    double _nits;
}

+ (id)newMonitorWithHandler:(id /* block */)a0 error:(id *)a1;
+ (void)failToCreateDisplaysFor:(double)a0;

- (id)init;
- (BOOL)setNits:(double)a0 error:(id *)a1;
- (double)getNitsWithError:(id *)a0;

@end
