@interface ATXDuetEventLocationVisit : ATXDuetEvent <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLocationOfInterestIdentifier:(id)a0 startDate:(id)a1 endDate:(id)a2;

@end
