@interface CAMediaTimingFunctionBuiltin : CAMediaTimingFunction {
    unsigned int _index;
}

+ (BOOL)supportsSecureCoding;

- (void)_getPoints:(double *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCAMLWriter:(id)a0;
- (Class)classForCoder;

@end
