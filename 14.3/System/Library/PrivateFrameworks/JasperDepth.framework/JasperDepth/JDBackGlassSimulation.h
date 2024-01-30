@interface JDBackGlassSimulation : NSObject {
    struct JasperBackGlassSimulation { struct Impl *m_impl; } _sim;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initForThickness:(float)a0 smudgePercent:(int)a1 preset:(int)a2;
- (void)simulateBackGlass:(id)a0;

@end
