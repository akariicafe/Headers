@class NSMeasurementFormatter;

@interface MXMetric : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSMeasurementFormatter *measurementFormatter;

- (id)JSONRepresentation;
- (id)toDictionary;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)DictionaryRepresentation;

@end
