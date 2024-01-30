@interface CADEventEntityWrapper : CADEntityWrapper {
    double _occurrenceDate;
}

@property (nonatomic) BOOL isDropoffEvent;
@property (nonatomic) BOOL isPickupEvent;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)occurrenceDate;
- (id)initWithCalEntity:(void *)a0 loadedValues:(id)a1 occurrenceDate:(double)a2;
- (id)initWithCoder:(id)a0;

@end
