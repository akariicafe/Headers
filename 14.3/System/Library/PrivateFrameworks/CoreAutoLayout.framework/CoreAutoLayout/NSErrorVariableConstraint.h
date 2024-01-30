@class NSISVariable;

@interface NSErrorVariableConstraint : NSLayoutConstraint {
    NSISVariable *_errorVariable;
    double _errorValue;
}

- (void)dealloc;
- (id)initWithVariable:(id)a0 value:(double)a1;
- (id)constrainedConstraint;
- (BOOL)_lowerIntoExpression:(id)a0 reportingConstantIsRounded:(BOOL *)a1;
- (int)nsis_orientationHintForVariable:(id)a0;

@end
