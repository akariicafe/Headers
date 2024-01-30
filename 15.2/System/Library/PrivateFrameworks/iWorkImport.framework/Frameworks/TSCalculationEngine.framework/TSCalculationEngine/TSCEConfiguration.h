@interface TSCEConfiguration : NSObject {
    BOOL mWarnWhenFormulasReferToEmptyCells;
}

+ (id)sharedCalculationEngineConfiguration;

- (id)init;
- (BOOL)warnWhenFormulasReferToEmptyCells;
- (void)setWarnWhenFormulasReferToEmptyCells:(BOOL)a0;

@end
