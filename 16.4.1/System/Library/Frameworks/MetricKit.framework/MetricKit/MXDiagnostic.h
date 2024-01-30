@class MXMetaData, NSString, NSMeasurementFormatter;

@interface MXDiagnostic : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSMeasurementFormatter *measurementFormatter;
@property (retain) MXMetaData *metaData;
@property (readonly) NSString *applicationVersion;

- (void)encodeWithCoder:(id)a0;
- (id)toDictionary;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)JSONRepresentation;
- (void).cxx_destruct;
- (id)initWithMetaData:(id)a0 applicationVersion:(id)a1;

@end
