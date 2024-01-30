@interface ATXLocationVisitDuetEvent : ATXDuetEvent <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)identifier;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithCurrentContextStoreValues;
- (id)initWithLocationOfInterestIdentifier:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)initWithCurrentContextStoreValues:(id)a0;

@end
