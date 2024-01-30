@interface CAMediaTimingFunctionBuiltin : CAMediaTimingFunction {
    unsigned int _index;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCAMLWriter:(id)a0;
- (void)_getPoints:(double *)a0;
- (id)description;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;

@end
