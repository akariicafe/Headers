@interface LNMeasurementValueType : LNValueType

@property (class, readonly, nonatomic) LNMeasurementValueType *unsupportedMeasurementValueType;
@property (class, readonly, nonatomic) LNMeasurementValueType *lengthValueType;
@property (class, readonly, nonatomic) LNMeasurementValueType *massValueType;
@property (class, readonly, nonatomic) LNMeasurementValueType *temperatureValueType;
@property (class, readonly, nonatomic) LNMeasurementValueType *volumeValueType;
@property (class, readonly, nonatomic) LNMeasurementValueType *speedValueType;
@property (class, readonly, nonatomic) LNMeasurementValueType *energyValueType;
@property (class, readonly, nonatomic) LNMeasurementValueType *durationValueType;

@property (readonly, nonatomic) long long unitType;

+ (BOOL)supportsSecureCoding;

- (Class)objectClass;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithUnitType:(long long)a0;
- (id)typeIdentifierAsString;

@end
