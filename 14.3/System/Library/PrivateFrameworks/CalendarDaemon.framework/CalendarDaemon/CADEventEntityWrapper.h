@interface CADEventEntityWrapper : CADEntityWrapper {
    double _occurrenceDate;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)occurrenceDate;
- (id)initWithCalEntity:(void *)a0 propertiesToLoad:(id)a1 occurrenceDate:(double)a2;
- (void)encodeWithCoder:(id)a0;

@end
