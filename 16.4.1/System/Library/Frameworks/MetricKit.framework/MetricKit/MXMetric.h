@class NSMeasurementFormatter;

@interface MXMetric : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSMeasurementFormatter *measurementFormatter;

- (void)encodeWithCoder:(id)a0;
- (id)toDictionary;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)JSONRepresentation;
- (id)init;
- (void).cxx_destruct;
- (id)DictionaryRepresentation;

@end
